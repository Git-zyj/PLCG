#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_15 = (unsigned char)217;
_Bool var_16 = (_Bool)0;
unsigned int var_18 = 3558515428U;
int zero = 0;
short var_19 = (short)8759;
signed char var_20 = (signed char)75;
unsigned long long int var_21 = 16096622141953687717ULL;
int var_22 = -1201958108;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
