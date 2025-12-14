#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)95;
long long int var_3 = 7381807238153681064LL;
unsigned long long int var_10 = 16931643788573595447ULL;
unsigned int var_11 = 2429209199U;
int var_18 = 584010507;
int zero = 0;
signed char var_19 = (signed char)63;
unsigned char var_20 = (unsigned char)157;
int var_21 = -1139160175;
short var_22 = (short)-21377;
unsigned char var_23 = (unsigned char)233;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
