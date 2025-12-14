#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_4 = -2005138943;
unsigned short var_6 = (unsigned short)2782;
short var_10 = (short)-25930;
unsigned char var_11 = (unsigned char)193;
unsigned char var_15 = (unsigned char)41;
long long int var_17 = 4071627568141745544LL;
unsigned short var_18 = (unsigned short)40820;
int zero = 0;
unsigned char var_20 = (unsigned char)209;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)147;
unsigned char var_23 = (unsigned char)43;
short var_24 = (short)-18924;
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
