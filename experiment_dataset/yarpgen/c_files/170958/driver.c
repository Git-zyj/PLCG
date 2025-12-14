#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)15058;
short var_3 = (short)23063;
int var_5 = -1766629910;
signed char var_6 = (signed char)-9;
short var_9 = (short)27859;
signed char var_11 = (signed char)-88;
unsigned int var_13 = 3376173666U;
int zero = 0;
int var_14 = -1296713858;
unsigned int var_15 = 1770770582U;
unsigned long long int var_16 = 15421001045182817265ULL;
unsigned short var_17 = (unsigned short)62212;
unsigned short var_18 = (unsigned short)60868;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
