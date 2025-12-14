#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14314;
signed char var_2 = (signed char)-32;
long long int var_4 = -3088085497900140385LL;
unsigned short var_9 = (unsigned short)6469;
short var_10 = (short)22980;
unsigned int var_12 = 2705227869U;
unsigned int var_13 = 874357909U;
int zero = 0;
short var_14 = (short)-3276;
signed char var_15 = (signed char)-118;
unsigned long long int var_16 = 16049841089723282267ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
