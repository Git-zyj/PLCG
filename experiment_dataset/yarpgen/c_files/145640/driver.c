#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)83;
signed char var_3 = (signed char)8;
signed char var_4 = (signed char)56;
unsigned long long int var_6 = 11166081434308922960ULL;
short var_8 = (short)19878;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_13 = 4307722945684410805ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 202506372957433564ULL;
int var_16 = 101068853;
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
