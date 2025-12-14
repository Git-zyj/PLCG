#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2366951343U;
short var_2 = (short)4076;
unsigned short var_4 = (unsigned short)30081;
int var_5 = 2101416224;
short var_6 = (short)-17351;
short var_7 = (short)-14788;
unsigned int var_9 = 3457081681U;
signed char var_12 = (signed char)-35;
int zero = 0;
unsigned int var_15 = 3064171061U;
signed char var_16 = (signed char)22;
unsigned int var_17 = 2640398909U;
void init() {
}

void checksum() {
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
