#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)151;
short var_3 = (short)-18757;
unsigned char var_6 = (unsigned char)75;
int var_7 = -1014588163;
unsigned short var_8 = (unsigned short)42439;
int var_9 = -473059758;
unsigned char var_10 = (unsigned char)51;
signed char var_11 = (signed char)-84;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_19 = -1783752617;
unsigned short var_20 = (unsigned short)61849;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
