#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 200881218;
unsigned short var_6 = (unsigned short)20571;
int var_7 = 742992856;
long long int var_12 = -6221190915443613028LL;
unsigned short var_15 = (unsigned short)58475;
int zero = 0;
unsigned long long int var_16 = 17691261018517281198ULL;
unsigned int var_17 = 3047349021U;
unsigned long long int var_18 = 12017270929725656630ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
