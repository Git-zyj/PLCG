#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_7 = (unsigned char)0;
signed char var_10 = (signed char)-4;
long long int var_12 = 280514078198240094LL;
unsigned int var_13 = 414528772U;
int zero = 0;
unsigned int var_18 = 590276199U;
unsigned char var_19 = (unsigned char)216;
unsigned int var_20 = 4108112425U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
