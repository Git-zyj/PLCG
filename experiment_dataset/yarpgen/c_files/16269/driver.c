#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7281687636402577089ULL;
unsigned int var_11 = 1582138532U;
unsigned long long int var_14 = 724348920712373505ULL;
int zero = 0;
unsigned int var_17 = 1030091502U;
unsigned short var_18 = (unsigned short)52986;
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
