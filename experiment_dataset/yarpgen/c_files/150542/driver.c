#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 408463355;
short var_4 = (short)23838;
_Bool var_6 = (_Bool)0;
long long int var_7 = -8723468225126142827LL;
int zero = 0;
unsigned short var_19 = (unsigned short)43237;
unsigned int var_20 = 3883065817U;
signed char var_21 = (signed char)-52;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
