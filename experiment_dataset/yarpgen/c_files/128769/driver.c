#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1066692887391145883LL;
signed char var_5 = (signed char)114;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 3428483120U;
int zero = 0;
long long int var_14 = -2908267439312583252LL;
unsigned short var_15 = (unsigned short)22693;
unsigned short var_16 = (unsigned short)22689;
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
