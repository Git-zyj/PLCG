#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3112710402U;
unsigned int var_6 = 827702029U;
int var_7 = 1215995471;
int var_15 = -1947035425;
unsigned long long int var_18 = 12896083253372005180ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)48156;
unsigned char var_21 = (unsigned char)253;
short var_22 = (short)25984;
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
