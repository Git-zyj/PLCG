#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)171;
int var_3 = 529630761;
unsigned short var_4 = (unsigned short)16130;
unsigned short var_7 = (unsigned short)64710;
unsigned char var_12 = (unsigned char)149;
int var_13 = -110355585;
int zero = 0;
unsigned char var_14 = (unsigned char)207;
_Bool var_15 = (_Bool)0;
long long int var_16 = -1466070802731090179LL;
unsigned int var_17 = 1408131337U;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
