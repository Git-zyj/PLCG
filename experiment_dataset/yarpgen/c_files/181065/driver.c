#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-121;
int var_2 = -456002706;
unsigned int var_5 = 4167339981U;
unsigned char var_7 = (unsigned char)42;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned short var_12 = (unsigned short)3627;
int zero = 0;
short var_15 = (short)17082;
signed char var_16 = (signed char)62;
unsigned char var_17 = (unsigned char)46;
signed char var_18 = (signed char)4;
int var_19 = -89519255;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
