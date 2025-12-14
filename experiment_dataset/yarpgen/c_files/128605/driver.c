#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)44956;
short var_4 = (short)-2444;
unsigned int var_8 = 1275248500U;
unsigned int var_9 = 725741726U;
int zero = 0;
long long int var_11 = 6936845204710400774LL;
short var_12 = (short)12537;
signed char var_13 = (signed char)(-127 - 1);
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
