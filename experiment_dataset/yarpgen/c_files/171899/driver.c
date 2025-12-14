#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)77;
signed char var_5 = (signed char)-14;
short var_6 = (short)13832;
int var_10 = 1846925506;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 3249183822U;
int zero = 0;
unsigned char var_15 = (unsigned char)33;
int var_16 = 1138143362;
signed char var_17 = (signed char)65;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
