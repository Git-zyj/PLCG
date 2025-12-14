#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2252702153U;
unsigned int var_8 = 2844950191U;
int var_10 = -799717557;
unsigned short var_12 = (unsigned short)30782;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2223924636U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
