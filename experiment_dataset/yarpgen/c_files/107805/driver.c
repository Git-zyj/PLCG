#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)55926;
int var_5 = 1305000715;
int var_7 = 767288340;
short var_8 = (short)-22376;
int var_19 = 862744600;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-24223;
int var_22 = 2037418806;
long long int var_23 = 5825420213801497035LL;
unsigned int var_24 = 1466348666U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
