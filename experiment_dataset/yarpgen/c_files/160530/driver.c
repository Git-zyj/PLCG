#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2668811328556105383LL;
short var_4 = (short)-15782;
signed char var_5 = (signed char)-91;
long long int var_7 = 55720710276524778LL;
int var_8 = -760105993;
signed char var_10 = (signed char)22;
unsigned int var_11 = 3751105890U;
int zero = 0;
unsigned long long int var_13 = 1990360142334256807ULL;
unsigned int var_14 = 3330551410U;
signed char var_15 = (signed char)-42;
void init() {
}

void checksum() {
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
