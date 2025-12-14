#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 635089166U;
unsigned int var_2 = 3948839228U;
unsigned int var_3 = 3852242368U;
short var_4 = (short)4888;
short var_5 = (short)19503;
short var_7 = (short)-6369;
short var_8 = (short)22132;
unsigned int var_9 = 956838880U;
unsigned int var_10 = 662797658U;
int zero = 0;
short var_11 = (short)-17256;
short var_12 = (short)17164;
short var_13 = (short)24464;
short var_14 = (short)-7283;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
