#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11445;
unsigned char var_2 = (unsigned char)99;
int var_7 = 824760230;
_Bool var_14 = (_Bool)0;
int var_15 = 87246777;
int zero = 0;
signed char var_18 = (signed char)-30;
unsigned short var_19 = (unsigned short)14004;
void init() {
}

void checksum() {
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
