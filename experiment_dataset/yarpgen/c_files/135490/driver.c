#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)636;
signed char var_14 = (signed char)20;
int var_15 = 61300991;
unsigned char var_18 = (unsigned char)147;
int zero = 0;
int var_19 = -384871680;
unsigned char var_20 = (unsigned char)30;
unsigned int var_21 = 3421545127U;
unsigned long long int var_22 = 9950116428022154534ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
