#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18112079975604934336ULL;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-12;
unsigned short var_6 = (unsigned short)4499;
unsigned char var_11 = (unsigned char)198;
int zero = 0;
unsigned short var_14 = (unsigned short)50378;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
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
