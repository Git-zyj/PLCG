#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)254;
unsigned short var_2 = (unsigned short)14969;
int var_4 = 1627868256;
_Bool var_5 = (_Bool)1;
short var_6 = (short)30878;
_Bool var_7 = (_Bool)1;
int var_10 = 610389568;
int zero = 0;
int var_12 = 1921372086;
short var_13 = (short)13053;
int var_14 = -1742951853;
int var_15 = 1003494969;
void init() {
}

void checksum() {
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
