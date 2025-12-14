#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)15;
unsigned short var_5 = (unsigned short)42184;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)14933;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)252;
signed char var_18 = (signed char)96;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
