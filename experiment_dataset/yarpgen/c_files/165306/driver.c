#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9853652207666286676ULL;
signed char var_2 = (signed char)125;
long long int var_3 = -69269642279400179LL;
unsigned long long int var_6 = 11725800354938695115ULL;
unsigned int var_7 = 4046094665U;
unsigned long long int var_8 = 11744737122905852369ULL;
unsigned short var_11 = (unsigned short)15409;
unsigned int var_14 = 626182845U;
int zero = 0;
unsigned char var_16 = (unsigned char)65;
unsigned char var_17 = (unsigned char)27;
void init() {
}

void checksum() {
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
