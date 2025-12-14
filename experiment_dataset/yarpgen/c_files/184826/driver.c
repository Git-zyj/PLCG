#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 488382868;
unsigned long long int var_1 = 1586245851552225575ULL;
unsigned int var_4 = 4063282003U;
_Bool var_5 = (_Bool)1;
unsigned short var_8 = (unsigned short)3241;
unsigned long long int var_10 = 8523125318420970988ULL;
int zero = 0;
unsigned long long int var_11 = 923069711825254152ULL;
unsigned char var_12 = (unsigned char)23;
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
