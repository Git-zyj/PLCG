#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37877;
short var_3 = (short)24320;
unsigned short var_4 = (unsigned short)14125;
short var_8 = (short)-26088;
unsigned int var_9 = 2651832452U;
int zero = 0;
unsigned int var_14 = 535738533U;
short var_15 = (short)4513;
int var_16 = -1073270462;
unsigned int var_17 = 1963972768U;
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
