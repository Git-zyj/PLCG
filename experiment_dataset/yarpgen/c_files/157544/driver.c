#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 2205341906850363830ULL;
unsigned int var_10 = 3318347096U;
short var_11 = (short)-14262;
unsigned int var_12 = 81403484U;
_Bool var_13 = (_Bool)0;
short var_15 = (short)-16816;
signed char var_16 = (signed char)-88;
int zero = 0;
unsigned char var_17 = (unsigned char)52;
unsigned short var_18 = (unsigned short)57598;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
