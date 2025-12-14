#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)28476;
signed char var_11 = (signed char)-101;
unsigned int var_12 = 1040373399U;
long long int var_17 = -129504615351754810LL;
int zero = 0;
unsigned long long int var_19 = 16904154214432620634ULL;
long long int var_20 = 3288007053765569553LL;
unsigned short var_21 = (unsigned short)10055;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
