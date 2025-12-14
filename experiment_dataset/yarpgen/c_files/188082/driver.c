#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1861068825;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 2882572841U;
_Bool var_7 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)2163;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)213;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)127;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
