#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3524976814046799870ULL;
signed char var_7 = (signed char)-102;
long long int var_8 = -7079372029576567508LL;
unsigned int var_9 = 3478224992U;
int var_10 = -649622884;
int zero = 0;
short var_11 = (short)12939;
unsigned char var_12 = (unsigned char)243;
void init() {
}

void checksum() {
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
