#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)162;
int var_11 = -1948857542;
unsigned char var_12 = (unsigned char)97;
unsigned long long int var_14 = 15082445945494446039ULL;
long long int var_17 = -5490768597405162705LL;
int zero = 0;
unsigned long long int var_20 = 16939742466712377587ULL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 9892706174385362721ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
