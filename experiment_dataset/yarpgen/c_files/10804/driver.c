#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9964683924710520088ULL;
signed char var_1 = (signed char)12;
unsigned int var_3 = 3601535514U;
short var_4 = (short)-9982;
short var_5 = (short)30257;
unsigned char var_6 = (unsigned char)203;
long long int var_10 = -6991798413170041421LL;
int zero = 0;
unsigned long long int var_11 = 4249415948330711364ULL;
unsigned char var_12 = (unsigned char)52;
int var_13 = -1378322482;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
