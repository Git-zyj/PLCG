#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-108;
_Bool var_2 = (_Bool)1;
signed char var_6 = (signed char)5;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_15 = (short)-3702;
short var_16 = (short)7329;
void init() {
}

void checksum() {
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
