#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1226;
unsigned int var_6 = 2531274423U;
short var_7 = (short)-5260;
unsigned short var_8 = (unsigned short)16088;
signed char var_9 = (signed char)37;
unsigned int var_10 = 1500270846U;
int zero = 0;
unsigned char var_11 = (unsigned char)196;
unsigned short var_12 = (unsigned short)48042;
unsigned char var_13 = (unsigned char)42;
unsigned long long int var_14 = 5981846408396104515ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
