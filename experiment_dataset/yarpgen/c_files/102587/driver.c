#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1707344737U;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-1786;
_Bool var_6 = (_Bool)0;
unsigned short var_11 = (unsigned short)23681;
int zero = 0;
int var_13 = 2059061842;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1170584682U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
