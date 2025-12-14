#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 395912954U;
int var_3 = 478462548;
unsigned int var_4 = 2290949226U;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 1987675267U;
unsigned int var_8 = 3781618382U;
unsigned char var_9 = (unsigned char)10;
signed char var_10 = (signed char)-38;
unsigned int var_13 = 3771437498U;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 10609440956128209221ULL;
unsigned int var_16 = 4104039012U;
int zero = 0;
unsigned int var_18 = 1308213585U;
unsigned char var_19 = (unsigned char)133;
unsigned char var_20 = (unsigned char)248;
void init() {
}

void checksum() {
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
