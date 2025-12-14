#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12626;
int var_2 = -262899455;
unsigned int var_5 = 2341583397U;
unsigned int var_8 = 3606634713U;
short var_10 = (short)29808;
unsigned char var_12 = (unsigned char)122;
int var_16 = -897295196;
long long int var_17 = 4887782177642317536LL;
unsigned int var_18 = 441749950U;
int zero = 0;
unsigned int var_20 = 2981062356U;
long long int var_21 = -964212964612032246LL;
unsigned int var_22 = 889387925U;
void init() {
}

void checksum() {
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
