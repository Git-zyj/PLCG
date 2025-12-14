#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)65;
_Bool var_7 = (_Bool)0;
int var_11 = -2084340617;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-79;
unsigned short var_16 = (unsigned short)53993;
void init() {
}

void checksum() {
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
