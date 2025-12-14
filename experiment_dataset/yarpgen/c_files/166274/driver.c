#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35242;
int var_1 = -1778295160;
unsigned char var_3 = (unsigned char)213;
unsigned long long int var_4 = 17748728606133775863ULL;
short var_6 = (short)-24620;
int zero = 0;
unsigned int var_11 = 3741297598U;
unsigned int var_12 = 2205469550U;
void init() {
}

void checksum() {
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
