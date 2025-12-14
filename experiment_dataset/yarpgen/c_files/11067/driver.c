#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 243759329U;
long long int var_9 = -7282868089262356291LL;
unsigned long long int var_10 = 13650952304508308558ULL;
unsigned short var_13 = (unsigned short)19026;
short var_16 = (short)-1300;
int zero = 0;
unsigned int var_20 = 2559225613U;
unsigned int var_21 = 4103294130U;
short var_22 = (short)-5000;
int var_23 = -702030221;
void init() {
}

void checksum() {
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
