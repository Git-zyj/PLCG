#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)116;
signed char var_2 = (signed char)-64;
signed char var_5 = (signed char)-53;
_Bool var_8 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)27;
signed char var_16 = (signed char)-63;
signed char var_17 = (signed char)-117;
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
