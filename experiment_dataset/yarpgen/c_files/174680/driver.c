#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)174;
unsigned int var_2 = 2875736178U;
long long int var_3 = -3511880249264881404LL;
unsigned short var_4 = (unsigned short)60301;
int var_6 = 981671224;
unsigned int var_9 = 830698688U;
int zero = 0;
unsigned long long int var_10 = 12911950179276268078ULL;
unsigned long long int var_11 = 15371298764547982293ULL;
unsigned char var_12 = (unsigned char)226;
int var_13 = 2028100820;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
