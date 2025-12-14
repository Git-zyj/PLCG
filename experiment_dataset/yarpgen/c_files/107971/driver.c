#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4164211871U;
long long int var_8 = 8305661726219458276LL;
unsigned short var_11 = (unsigned short)35239;
int zero = 0;
unsigned long long int var_12 = 13252394924791202196ULL;
unsigned short var_13 = (unsigned short)6284;
void init() {
}

void checksum() {
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
