#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 8377124585498456857ULL;
long long int var_2 = -3997731176493289261LL;
unsigned short var_3 = (unsigned short)39151;
signed char var_4 = (signed char)-21;
unsigned long long int var_6 = 17301415800727429090ULL;
unsigned long long int var_7 = 11593088632473497754ULL;
unsigned long long int var_9 = 3789855448520242484ULL;
_Bool var_10 = (_Bool)0;
long long int var_12 = -6881447070845336577LL;
short var_14 = (short)-15770;
unsigned long long int var_16 = 17456402222399018625ULL;
int zero = 0;
long long int var_17 = -2398738615187898007LL;
unsigned int var_18 = 503472974U;
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
