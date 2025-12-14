#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2147345892U;
unsigned short var_5 = (unsigned short)44314;
short var_9 = (short)-4773;
signed char var_10 = (signed char)-44;
int zero = 0;
unsigned int var_11 = 1594646396U;
unsigned long long int var_12 = 937809852723162826ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
