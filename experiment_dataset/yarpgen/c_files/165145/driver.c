#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9166;
unsigned long long int var_1 = 752293250474178236ULL;
unsigned int var_7 = 1592904010U;
unsigned long long int var_10 = 4373412093909386532ULL;
short var_12 = (short)-4854;
unsigned char var_13 = (unsigned char)184;
int var_16 = 411433083;
unsigned char var_18 = (unsigned char)69;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-32619;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
