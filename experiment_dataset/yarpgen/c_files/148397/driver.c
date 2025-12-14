#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17957;
_Bool var_1 = (_Bool)1;
long long int var_2 = 1231133173118883815LL;
signed char var_3 = (signed char)-91;
_Bool var_4 = (_Bool)0;
long long int var_6 = -1412839251292268639LL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)26932;
unsigned short var_9 = (unsigned short)20010;
_Bool var_10 = (_Bool)1;
long long int var_11 = -6748260248209759389LL;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)52394;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)50521;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)31451;
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
