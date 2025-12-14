#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6049;
signed char var_5 = (signed char)65;
unsigned int var_6 = 3564728031U;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_15 = -1360624667975728339LL;
short var_16 = (short)22056;
signed char var_17 = (signed char)-2;
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
