#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 3573988568U;
long long int var_8 = 4581818882362254651LL;
unsigned short var_14 = (unsigned short)46335;
int zero = 0;
unsigned char var_20 = (unsigned char)18;
int var_21 = -527911314;
int var_22 = 1350128084;
signed char var_23 = (signed char)-54;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
