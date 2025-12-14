#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27544;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 1529130376U;
long long int var_5 = -7775276344280758247LL;
unsigned int var_6 = 890276892U;
unsigned char var_11 = (unsigned char)192;
int zero = 0;
long long int var_12 = 2782207227895803187LL;
short var_13 = (short)23641;
unsigned char var_14 = (unsigned char)5;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
