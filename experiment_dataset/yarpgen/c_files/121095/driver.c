#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)98;
unsigned short var_3 = (unsigned short)33152;
unsigned short var_4 = (unsigned short)63095;
_Bool var_6 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 3753066242U;
short var_11 = (short)6985;
unsigned int var_12 = 3080596080U;
long long int var_13 = -4775085611466603336LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
