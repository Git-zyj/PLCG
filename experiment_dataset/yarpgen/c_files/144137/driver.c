#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 573970053;
_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)-102;
unsigned char var_4 = (unsigned char)217;
unsigned int var_6 = 282011202U;
unsigned char var_7 = (unsigned char)88;
int zero = 0;
unsigned int var_10 = 1507090780U;
unsigned short var_11 = (unsigned short)45238;
long long int var_12 = 598272483933314174LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
