#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1461514728;
signed char var_6 = (signed char)65;
short var_8 = (short)14351;
unsigned long long int var_9 = 10787092803351712733ULL;
unsigned char var_10 = (unsigned char)14;
unsigned long long int var_12 = 14595020596220439870ULL;
int zero = 0;
signed char var_13 = (signed char)-9;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-60;
unsigned long long int var_16 = 3532615642052329008ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
