#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12054064913987613996ULL;
short var_3 = (short)12414;
signed char var_5 = (signed char)-58;
unsigned char var_9 = (unsigned char)168;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 9566249233294479323ULL;
int zero = 0;
unsigned int var_14 = 1273185818U;
short var_15 = (short)-26037;
unsigned int var_16 = 3161835327U;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
