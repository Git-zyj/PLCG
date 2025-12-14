#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)62;
long long int var_9 = 732864839516431398LL;
unsigned int var_15 = 1654570392U;
int zero = 0;
unsigned int var_16 = 2389279909U;
unsigned short var_17 = (unsigned short)9936;
long long int var_18 = -3335074650180802894LL;
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
