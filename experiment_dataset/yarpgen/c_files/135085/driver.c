#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_8 = (short)-9589;
unsigned char var_12 = (unsigned char)49;
signed char var_13 = (signed char)36;
int zero = 0;
unsigned char var_16 = (unsigned char)28;
signed char var_17 = (signed char)-89;
signed char var_18 = (signed char)37;
void init() {
}

void checksum() {
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
