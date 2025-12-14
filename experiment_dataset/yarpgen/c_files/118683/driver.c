#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33764;
unsigned short var_3 = (unsigned short)60186;
unsigned short var_4 = (unsigned short)43179;
unsigned char var_5 = (unsigned char)136;
unsigned char var_6 = (unsigned char)249;
short var_8 = (short)-31109;
unsigned int var_11 = 2306527889U;
unsigned int var_12 = 369182842U;
int zero = 0;
unsigned long long int var_13 = 13256824733388220583ULL;
_Bool var_14 = (_Bool)0;
int var_15 = 1343550541;
unsigned int var_16 = 2999941236U;
long long int var_17 = -8424036980231958839LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
