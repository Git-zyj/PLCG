#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2890188990U;
unsigned short var_8 = (unsigned short)49113;
int zero = 0;
short var_20 = (short)10701;
unsigned char var_21 = (unsigned char)51;
int var_22 = 1785096182;
short var_23 = (short)-4745;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
