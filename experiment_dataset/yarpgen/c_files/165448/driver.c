#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13249;
unsigned short var_6 = (unsigned short)48106;
unsigned int var_8 = 3656602360U;
int var_13 = 180488206;
long long int var_18 = 4909867226179204165LL;
int zero = 0;
unsigned char var_20 = (unsigned char)220;
unsigned char var_21 = (unsigned char)90;
short var_22 = (short)10778;
int var_23 = -1496480297;
unsigned int var_24 = 2078527889U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
