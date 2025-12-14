#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2258575961U;
unsigned char var_5 = (unsigned char)137;
unsigned int var_7 = 2403809097U;
unsigned long long int var_15 = 11870590084948207530ULL;
unsigned long long int var_17 = 1736125127344726146ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)37577;
short var_20 = (short)-22209;
unsigned short var_21 = (unsigned short)50135;
signed char var_22 = (signed char)-125;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
