#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17853698334520543447ULL;
long long int var_4 = 4700195767657461760LL;
long long int var_8 = -9007429504119170851LL;
short var_10 = (short)30488;
int zero = 0;
short var_18 = (short)-29213;
unsigned char var_19 = (unsigned char)189;
unsigned short var_20 = (unsigned short)65368;
unsigned char var_21 = (unsigned char)204;
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
