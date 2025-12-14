#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29877;
_Bool var_2 = (_Bool)0;
unsigned char var_6 = (unsigned char)120;
long long int var_11 = 8060906455060729646LL;
int zero = 0;
unsigned int var_20 = 682289928U;
_Bool var_21 = (_Bool)1;
long long int var_22 = -4652945269451243164LL;
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
