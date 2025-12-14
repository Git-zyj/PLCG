#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26002;
int var_1 = 709221162;
unsigned int var_3 = 58323288U;
unsigned char var_4 = (unsigned char)135;
unsigned char var_6 = (unsigned char)126;
long long int var_7 = -27778363092074709LL;
int var_8 = -1243370525;
int var_11 = 201196095;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)53739;
short var_14 = (short)32021;
int var_15 = -965555589;
short var_16 = (short)-4536;
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
