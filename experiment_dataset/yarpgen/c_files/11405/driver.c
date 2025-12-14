#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57506;
long long int var_6 = 4819400789349616091LL;
signed char var_7 = (signed char)-34;
unsigned long long int var_9 = 7437401913486722107ULL;
unsigned char var_15 = (unsigned char)173;
long long int var_18 = -6812019204771589900LL;
unsigned int var_19 = 1767916039U;
int zero = 0;
int var_20 = 1417798164;
signed char var_21 = (signed char)-4;
signed char var_22 = (signed char)-81;
int var_23 = 506570563;
unsigned int var_24 = 1190986746U;
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
