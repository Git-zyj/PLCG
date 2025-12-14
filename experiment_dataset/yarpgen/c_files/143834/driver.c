#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -8153531;
short var_5 = (short)-8160;
unsigned short var_8 = (unsigned short)12616;
unsigned int var_9 = 870720480U;
int zero = 0;
unsigned int var_14 = 2355555794U;
int var_15 = -1944557515;
unsigned short var_16 = (unsigned short)59312;
unsigned int var_17 = 2369046785U;
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
