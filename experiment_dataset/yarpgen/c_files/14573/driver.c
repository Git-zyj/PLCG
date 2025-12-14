#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -696977148;
unsigned int var_2 = 3824074881U;
int var_13 = 3840131;
unsigned int var_14 = 3280369075U;
unsigned long long int var_15 = 10240012114797178692ULL;
int zero = 0;
unsigned long long int var_17 = 9899976463232237023ULL;
unsigned int var_18 = 3725263119U;
unsigned int var_19 = 3194596428U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
