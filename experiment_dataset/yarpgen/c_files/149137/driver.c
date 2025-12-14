#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18629;
int var_2 = 363715825;
unsigned short var_3 = (unsigned short)25657;
_Bool var_5 = (_Bool)1;
int var_9 = 889299913;
unsigned short var_12 = (unsigned short)52935;
int var_13 = -523043633;
unsigned int var_14 = 1118943702U;
unsigned char var_17 = (unsigned char)127;
int zero = 0;
unsigned int var_20 = 3578434417U;
short var_21 = (short)-31487;
long long int var_22 = 9017969095416596129LL;
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
