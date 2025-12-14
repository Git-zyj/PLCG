#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1112466132U;
unsigned char var_1 = (unsigned char)67;
long long int var_4 = -791789990541869044LL;
unsigned short var_6 = (unsigned short)59219;
signed char var_10 = (signed char)-125;
unsigned int var_11 = 662797693U;
unsigned char var_12 = (unsigned char)24;
unsigned int var_13 = 824731212U;
unsigned int var_14 = 2625800317U;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)55291;
unsigned int var_21 = 3469061174U;
int var_22 = -605823757;
unsigned char var_23 = (unsigned char)188;
unsigned long long int var_24 = 6883431932599253335ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
