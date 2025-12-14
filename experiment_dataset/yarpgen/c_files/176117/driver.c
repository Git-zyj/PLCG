#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13852;
unsigned char var_7 = (unsigned char)213;
int var_8 = -1915120645;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)22295;
int var_15 = 44423028;
unsigned char var_17 = (unsigned char)126;
int zero = 0;
int var_18 = -652337369;
short var_19 = (short)8859;
unsigned short var_20 = (unsigned short)16654;
unsigned int var_21 = 3063324634U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
