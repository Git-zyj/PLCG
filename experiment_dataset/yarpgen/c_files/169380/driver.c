#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)130;
unsigned int var_5 = 3494104314U;
unsigned char var_6 = (unsigned char)58;
short var_7 = (short)-32044;
int var_9 = -191198533;
unsigned char var_10 = (unsigned char)131;
int var_11 = 356716695;
unsigned short var_12 = (unsigned short)30076;
short var_18 = (short)-15295;
int zero = 0;
unsigned char var_19 = (unsigned char)123;
unsigned char var_20 = (unsigned char)190;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
