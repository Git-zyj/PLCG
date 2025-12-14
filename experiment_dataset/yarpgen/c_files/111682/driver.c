#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)16;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 1217259680U;
unsigned char var_8 = (unsigned char)38;
long long int var_10 = -1158174026826068864LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)225;
_Bool var_13 = (_Bool)1;
short var_14 = (short)4800;
unsigned short var_15 = (unsigned short)13715;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
