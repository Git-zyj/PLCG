#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17932;
int var_2 = -567535442;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)10140;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)174;
short var_8 = (short)-13176;
int zero = 0;
signed char var_10 = (signed char)58;
unsigned long long int var_11 = 13661943009610822216ULL;
short var_12 = (short)-7963;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
