#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)24;
unsigned int var_5 = 3087280430U;
int var_6 = 984295753;
short var_7 = (short)-11687;
unsigned char var_19 = (unsigned char)34;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = 441101619;
long long int var_22 = -7025460858259987791LL;
void init() {
}

void checksum() {
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
