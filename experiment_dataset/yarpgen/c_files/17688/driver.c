#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63241;
signed char var_3 = (signed char)-27;
int var_6 = 1072530136;
unsigned short var_9 = (unsigned short)35630;
signed char var_13 = (signed char)-89;
int zero = 0;
unsigned int var_16 = 2559325620U;
short var_17 = (short)-24208;
long long int var_18 = 8258662717844048365LL;
unsigned int var_19 = 2022065367U;
void init() {
}

void checksum() {
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
