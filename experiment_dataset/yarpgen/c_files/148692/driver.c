#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)121;
int var_5 = -1733519209;
int var_8 = 299707767;
unsigned char var_13 = (unsigned char)3;
int var_14 = -121279561;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-122;
_Bool var_18 = (_Bool)0;
int var_19 = -649280789;
unsigned char var_20 = (unsigned char)99;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
