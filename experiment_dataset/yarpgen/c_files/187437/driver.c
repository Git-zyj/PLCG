#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)66;
unsigned long long int var_9 = 1362122193888493723ULL;
unsigned short var_11 = (unsigned short)22165;
short var_12 = (short)28209;
unsigned short var_14 = (unsigned short)43472;
signed char var_15 = (signed char)50;
unsigned short var_16 = (unsigned short)31871;
int zero = 0;
unsigned short var_17 = (unsigned short)50952;
unsigned short var_18 = (unsigned short)64406;
void init() {
}

void checksum() {
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
