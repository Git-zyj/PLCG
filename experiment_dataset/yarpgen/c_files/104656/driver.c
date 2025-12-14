#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 8817156U;
unsigned int var_3 = 2307282830U;
unsigned int var_6 = 3399287289U;
unsigned short var_8 = (unsigned short)19943;
unsigned long long int var_9 = 9114166716296604790ULL;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)1;
unsigned int var_13 = 2154388241U;
int zero = 0;
unsigned int var_14 = 1188352686U;
unsigned long long int var_15 = 11463763643214639954ULL;
unsigned int var_16 = 3885589184U;
unsigned char var_17 = (unsigned char)244;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
