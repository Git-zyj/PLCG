#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)88;
short var_6 = (short)30778;
short var_7 = (short)-19772;
unsigned short var_9 = (unsigned short)30822;
int var_15 = 1528736123;
int zero = 0;
short var_17 = (short)14868;
unsigned int var_18 = 3286231320U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
