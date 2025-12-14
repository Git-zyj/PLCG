#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2306257203971375169LL;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)65441;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 3625460363U;
signed char var_6 = (signed char)-121;
unsigned short var_7 = (unsigned short)57340;
unsigned char var_8 = (unsigned char)80;
unsigned short var_9 = (unsigned short)6329;
unsigned int var_11 = 2639003189U;
short var_12 = (short)-28122;
unsigned int var_13 = 2997578927U;
unsigned int var_14 = 847777813U;
int zero = 0;
int var_16 = -1272123460;
unsigned char var_17 = (unsigned char)159;
void init() {
}

void checksum() {
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
