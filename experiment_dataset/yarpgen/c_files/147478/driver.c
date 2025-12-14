#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)19678;
signed char var_5 = (signed char)-51;
_Bool var_7 = (_Bool)1;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)21;
short var_14 = (short)722;
int zero = 0;
long long int var_16 = 8668987004068685169LL;
signed char var_17 = (signed char)-116;
void init() {
}

void checksum() {
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
