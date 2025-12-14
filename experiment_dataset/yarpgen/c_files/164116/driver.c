#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)170;
unsigned long long int var_3 = 1031806005857739418ULL;
long long int var_4 = -3260597487353711621LL;
unsigned long long int var_6 = 7358786979674552501ULL;
int var_8 = -1768659535;
unsigned char var_9 = (unsigned char)169;
int zero = 0;
unsigned char var_11 = (unsigned char)148;
unsigned int var_12 = 3292145323U;
long long int var_13 = 3072026453161583284LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
