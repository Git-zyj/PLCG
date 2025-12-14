#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7763;
signed char var_1 = (signed char)-13;
long long int var_2 = 1636508343884792537LL;
unsigned int var_3 = 3109234461U;
short var_4 = (short)-8775;
signed char var_5 = (signed char)80;
int var_6 = 175697782;
_Bool var_7 = (_Bool)0;
short var_8 = (short)639;
short var_9 = (short)-3480;
int zero = 0;
unsigned short var_10 = (unsigned short)10484;
long long int var_11 = 3937809465803170387LL;
short var_12 = (short)14248;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
