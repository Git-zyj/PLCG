#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)19808;
unsigned int var_5 = 1546598638U;
short var_6 = (short)-31785;
long long int var_8 = 2372718023605531526LL;
signed char var_12 = (signed char)69;
int zero = 0;
short var_18 = (short)436;
unsigned int var_19 = 3612816949U;
unsigned int var_20 = 274778752U;
void init() {
}

void checksum() {
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
