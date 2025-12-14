#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 221150221U;
unsigned char var_5 = (unsigned char)171;
int var_6 = -1385092735;
_Bool var_9 = (_Bool)1;
int var_10 = -273885359;
int zero = 0;
int var_11 = 522094266;
unsigned short var_12 = (unsigned short)14033;
short var_13 = (short)-30207;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
