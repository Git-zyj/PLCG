#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2030937670U;
short var_6 = (short)28930;
short var_7 = (short)-12481;
unsigned short var_11 = (unsigned short)27701;
_Bool var_14 = (_Bool)1;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 515903935U;
int var_18 = -562088971;
unsigned char var_19 = (unsigned char)58;
unsigned int var_20 = 2094948821U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
