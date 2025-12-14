#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2248;
long long int var_1 = -5261497233631055658LL;
int var_2 = -1601783886;
unsigned char var_4 = (unsigned char)17;
long long int var_7 = -1854823848925914722LL;
long long int var_8 = 4869229021936448811LL;
unsigned short var_9 = (unsigned short)23485;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)44;
long long int var_17 = 4409925231237301913LL;
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
