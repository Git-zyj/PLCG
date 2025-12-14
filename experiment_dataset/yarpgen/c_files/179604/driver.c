#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2568796586U;
unsigned int var_1 = 2552645105U;
unsigned int var_3 = 2945354969U;
unsigned int var_4 = 2790578995U;
unsigned int var_5 = 3134098910U;
unsigned int var_7 = 1787574365U;
unsigned int var_11 = 1935826391U;
unsigned int var_12 = 1091672998U;
int zero = 0;
unsigned int var_14 = 1361338668U;
unsigned int var_15 = 2749921728U;
unsigned int var_16 = 69320726U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
