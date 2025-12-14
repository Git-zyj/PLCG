#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18957;
int var_3 = -986015114;
int var_5 = -37068357;
unsigned int var_8 = 2535385734U;
unsigned short var_9 = (unsigned short)8521;
long long int var_13 = -1977188099774357334LL;
int zero = 0;
unsigned char var_14 = (unsigned char)15;
unsigned long long int var_15 = 17853399696964032771ULL;
unsigned short var_16 = (unsigned short)44534;
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
