#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12669;
short var_7 = (short)21502;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-31812;
unsigned int var_15 = 715899488U;
unsigned long long int var_16 = 13239462195127788244ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
