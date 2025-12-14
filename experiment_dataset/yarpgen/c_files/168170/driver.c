#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19258;
unsigned long long int var_1 = 13462848371011346454ULL;
unsigned long long int var_4 = 4247621690522222930ULL;
unsigned long long int var_12 = 12939958430109184200ULL;
short var_15 = (short)-3109;
short var_17 = (short)-24473;
int zero = 0;
unsigned long long int var_18 = 16122711214058706031ULL;
int var_19 = -2000250050;
unsigned int var_20 = 798143278U;
unsigned int var_21 = 2372060143U;
unsigned char var_22 = (unsigned char)254;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
