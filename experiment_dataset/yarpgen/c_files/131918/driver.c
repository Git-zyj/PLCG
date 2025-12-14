#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 80750445;
signed char var_4 = (signed char)-9;
short var_6 = (short)9595;
unsigned char var_10 = (unsigned char)237;
int zero = 0;
unsigned char var_12 = (unsigned char)152;
unsigned short var_13 = (unsigned short)45888;
unsigned short var_14 = (unsigned short)13650;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
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
