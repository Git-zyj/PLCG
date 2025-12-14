#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)38;
_Bool var_3 = (_Bool)1;
long long int var_6 = 8458017955624095004LL;
unsigned char var_8 = (unsigned char)35;
short var_13 = (short)29427;
unsigned short var_14 = (unsigned short)3286;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 3739774214U;
long long int var_18 = 667281743319783252LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
