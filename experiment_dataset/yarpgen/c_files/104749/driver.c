#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5667237976803551893LL;
unsigned int var_3 = 961675446U;
unsigned char var_5 = (unsigned char)121;
signed char var_6 = (signed char)124;
unsigned int var_7 = 1203246883U;
unsigned char var_13 = (unsigned char)92;
int zero = 0;
signed char var_15 = (signed char)-33;
long long int var_16 = 4025842736666105013LL;
long long int var_17 = -301772934997027408LL;
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
