#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11194;
unsigned char var_2 = (unsigned char)204;
long long int var_3 = -1811839330288184414LL;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)70;
unsigned short var_9 = (unsigned short)63417;
int zero = 0;
short var_13 = (short)25892;
signed char var_14 = (signed char)96;
_Bool var_15 = (_Bool)0;
long long int var_16 = 4923359069509112074LL;
void init() {
}

void checksum() {
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
