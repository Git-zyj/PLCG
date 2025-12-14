#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12446620631745898283ULL;
_Bool var_1 = (_Bool)0;
int var_2 = 2146811551;
unsigned short var_7 = (unsigned short)5676;
unsigned int var_13 = 4127586716U;
int zero = 0;
unsigned int var_16 = 1704598640U;
unsigned char var_17 = (unsigned char)144;
int var_18 = 2125903655;
unsigned char var_19 = (unsigned char)4;
unsigned long long int var_20 = 6521032092849007563ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
