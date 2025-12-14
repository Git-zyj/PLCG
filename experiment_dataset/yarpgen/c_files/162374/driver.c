#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11332434688850426424ULL;
unsigned char var_2 = (unsigned char)34;
unsigned char var_5 = (unsigned char)135;
short var_6 = (short)12811;
unsigned int var_10 = 832735754U;
int zero = 0;
long long int var_11 = 4513068102429262739LL;
signed char var_12 = (signed char)72;
unsigned char var_13 = (unsigned char)38;
unsigned long long int var_14 = 11296183522849282051ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
