#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)27121;
signed char var_7 = (signed char)125;
unsigned long long int var_8 = 15171972115984000414ULL;
unsigned short var_11 = (unsigned short)9603;
long long int var_12 = -3039766068603553430LL;
int zero = 0;
int var_13 = 1132433953;
unsigned short var_14 = (unsigned short)6011;
_Bool var_15 = (_Bool)1;
short var_16 = (short)15691;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
