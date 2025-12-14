#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 6708068312150371606LL;
signed char var_6 = (signed char)(-127 - 1);
unsigned int var_8 = 1121867959U;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_13 = (short)6792;
long long int var_14 = -7270588748036702103LL;
signed char var_15 = (signed char)-68;
long long int var_16 = -4035405964259377997LL;
unsigned long long int var_17 = 1630134753301855010ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
