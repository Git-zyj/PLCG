#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)32;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)44748;
unsigned int var_7 = 1953384592U;
int var_8 = -1387592273;
unsigned long long int var_11 = 2027842555507940666ULL;
int zero = 0;
short var_13 = (short)21955;
unsigned short var_14 = (unsigned short)39676;
unsigned int var_15 = 3237998114U;
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
