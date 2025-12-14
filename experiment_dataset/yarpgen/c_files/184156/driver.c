#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-121;
unsigned char var_3 = (unsigned char)197;
int var_4 = 507166228;
signed char var_6 = (signed char)111;
unsigned short var_7 = (unsigned short)52011;
short var_9 = (short)-8985;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)1371;
unsigned int var_16 = 1556300419U;
unsigned short var_17 = (unsigned short)12639;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 240780829U;
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
