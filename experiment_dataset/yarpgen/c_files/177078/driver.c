#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3142727630813584223LL;
short var_6 = (short)13065;
_Bool var_8 = (_Bool)0;
unsigned char var_13 = (unsigned char)89;
long long int var_14 = -1390911824866882798LL;
signed char var_17 = (signed char)-58;
int zero = 0;
short var_20 = (short)8924;
unsigned int var_21 = 588332903U;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
