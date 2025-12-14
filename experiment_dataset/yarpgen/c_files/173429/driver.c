#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)91;
_Bool var_1 = (_Bool)0;
signed char var_5 = (signed char)-105;
signed char var_8 = (signed char)38;
signed char var_12 = (signed char)-89;
int zero = 0;
short var_15 = (short)2097;
short var_16 = (short)5934;
int var_17 = 972416821;
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
