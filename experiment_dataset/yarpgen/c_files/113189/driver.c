#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11797;
unsigned short var_2 = (unsigned short)11466;
int var_3 = -1561435629;
unsigned short var_5 = (unsigned short)587;
unsigned short var_6 = (unsigned short)25608;
long long int var_8 = 8477339957435760746LL;
unsigned short var_9 = (unsigned short)44286;
int zero = 0;
unsigned char var_10 = (unsigned char)54;
short var_11 = (short)-12639;
_Bool var_12 = (_Bool)0;
int var_13 = 602675833;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
