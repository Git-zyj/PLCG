#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-50;
long long int var_1 = -6582938209646604149LL;
signed char var_2 = (signed char)-16;
long long int var_5 = -3597142638274372550LL;
short var_6 = (short)29792;
_Bool var_8 = (_Bool)0;
unsigned short var_11 = (unsigned short)54270;
int zero = 0;
short var_12 = (short)5649;
unsigned char var_13 = (unsigned char)135;
unsigned int var_14 = 2776002994U;
long long int var_15 = 8339330537350354443LL;
long long int var_16 = 4858362152510549726LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
