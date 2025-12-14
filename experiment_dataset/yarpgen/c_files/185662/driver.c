#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10570;
unsigned char var_6 = (unsigned char)248;
unsigned short var_10 = (unsigned short)45251;
_Bool var_11 = (_Bool)1;
short var_13 = (short)-27161;
short var_15 = (short)-30835;
unsigned int var_16 = 3040847808U;
int zero = 0;
unsigned short var_18 = (unsigned short)45833;
long long int var_19 = 8594717135209585646LL;
int var_20 = 1557843580;
short var_21 = (short)585;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
