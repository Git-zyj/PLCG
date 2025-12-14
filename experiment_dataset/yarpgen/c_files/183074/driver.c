#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3898815373U;
signed char var_5 = (signed char)63;
_Bool var_6 = (_Bool)0;
int var_11 = -861404275;
int zero = 0;
signed char var_13 = (signed char)9;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)32930;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
