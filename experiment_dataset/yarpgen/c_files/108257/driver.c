#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)176;
unsigned short var_1 = (unsigned short)34186;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-70;
long long int var_5 = -4473073384586574283LL;
_Bool var_8 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)123;
unsigned char var_11 = (unsigned char)115;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
