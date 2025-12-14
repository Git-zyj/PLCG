#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 7845151455146018663ULL;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)218;
signed char var_9 = (signed char)-118;
int zero = 0;
unsigned int var_14 = 1135544842U;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 8641180406528056233ULL;
short var_17 = (short)913;
unsigned char var_18 = (unsigned char)66;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
