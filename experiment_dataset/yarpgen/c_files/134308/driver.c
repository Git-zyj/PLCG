#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)153;
short var_1 = (short)-21658;
unsigned int var_2 = 2744865640U;
short var_4 = (short)-26963;
short var_8 = (short)-27671;
signed char var_11 = (signed char)26;
short var_12 = (short)-344;
unsigned int var_14 = 877113775U;
int zero = 0;
signed char var_16 = (signed char)-113;
short var_17 = (short)-23397;
unsigned char var_18 = (unsigned char)35;
int var_19 = 1925578117;
unsigned short var_20 = (unsigned short)17671;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
