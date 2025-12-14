#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)14;
signed char var_4 = (signed char)-70;
unsigned short var_5 = (unsigned short)1403;
signed char var_13 = (signed char)63;
unsigned short var_16 = (unsigned short)64764;
int zero = 0;
int var_17 = 340903250;
int var_18 = -69223498;
unsigned short var_19 = (unsigned short)1104;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
