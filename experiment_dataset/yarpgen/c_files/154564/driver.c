#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1204649980179814443LL;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)61424;
int var_13 = 1671769584;
_Bool var_14 = (_Bool)1;
unsigned int var_16 = 1737714537U;
int zero = 0;
unsigned int var_17 = 3256450852U;
short var_18 = (short)10832;
long long int var_19 = -7383441092927015820LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
