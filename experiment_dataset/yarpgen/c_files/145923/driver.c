#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)56;
signed char var_2 = (signed char)12;
int var_5 = -1368373717;
unsigned int var_6 = 353591112U;
unsigned long long int var_7 = 12635711087207769087ULL;
unsigned long long int var_11 = 16869571210118744486ULL;
signed char var_12 = (signed char)-11;
signed char var_14 = (signed char)22;
int zero = 0;
int var_15 = 700946133;
unsigned long long int var_16 = 2993717101553065126ULL;
unsigned long long int var_17 = 15989304520903505919ULL;
int var_18 = 365262416;
unsigned int var_19 = 1699841173U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
