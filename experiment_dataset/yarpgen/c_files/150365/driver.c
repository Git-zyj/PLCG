#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 173946702U;
long long int var_1 = 6773405616389467220LL;
unsigned long long int var_2 = 13037757559715621619ULL;
unsigned long long int var_4 = 3668245025534803521ULL;
unsigned char var_5 = (unsigned char)64;
short var_7 = (short)-23899;
unsigned short var_9 = (unsigned short)17678;
int zero = 0;
signed char var_11 = (signed char)-122;
unsigned short var_12 = (unsigned short)47796;
unsigned long long int var_13 = 5636907902097617598ULL;
unsigned long long int var_14 = 10814870101287986523ULL;
short var_15 = (short)-7305;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
