#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1898133768;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)159;
long long int var_6 = -9009309387525396390LL;
unsigned short var_9 = (unsigned short)50573;
unsigned int var_10 = 441546228U;
int zero = 0;
unsigned short var_13 = (unsigned short)56460;
unsigned char var_14 = (unsigned char)5;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
