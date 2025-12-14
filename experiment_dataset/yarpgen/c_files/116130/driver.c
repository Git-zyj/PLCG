#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7802133678609870540ULL;
unsigned char var_4 = (unsigned char)171;
_Bool var_6 = (_Bool)1;
unsigned char var_15 = (unsigned char)187;
int zero = 0;
unsigned long long int var_16 = 9260733312577718790ULL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
