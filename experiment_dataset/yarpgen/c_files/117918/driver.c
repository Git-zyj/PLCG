#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-36;
unsigned char var_2 = (unsigned char)239;
signed char var_3 = (signed char)-81;
unsigned int var_8 = 1688535691U;
short var_9 = (short)-3935;
int var_10 = 1081117317;
unsigned char var_11 = (unsigned char)107;
unsigned long long int var_12 = 4112671766871445432ULL;
int zero = 0;
unsigned int var_13 = 3589789099U;
unsigned int var_14 = 2889374108U;
unsigned int var_15 = 1234360708U;
unsigned short var_16 = (unsigned short)59234;
short var_17 = (short)26002;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
