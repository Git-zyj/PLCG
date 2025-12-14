#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7609435516291178048ULL;
short var_1 = (short)29677;
unsigned char var_2 = (unsigned char)35;
signed char var_6 = (signed char)-40;
int var_7 = 599835166;
short var_10 = (short)-24930;
_Bool var_11 = (_Bool)0;
int var_13 = -465704606;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = 419672973;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
