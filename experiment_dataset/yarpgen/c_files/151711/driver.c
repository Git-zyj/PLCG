#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)19;
unsigned short var_3 = (unsigned short)29033;
_Bool var_7 = (_Bool)0;
unsigned int var_10 = 2271993724U;
signed char var_18 = (signed char)-107;
int zero = 0;
int var_20 = 1550448025;
unsigned char var_21 = (unsigned char)16;
short var_22 = (short)24914;
unsigned long long int var_23 = 13195661491195867296ULL;
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
