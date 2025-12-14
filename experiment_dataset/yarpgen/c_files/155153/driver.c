#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 1682679637147173612ULL;
unsigned char var_9 = (unsigned char)140;
int var_10 = -955786571;
int var_13 = 501737971;
short var_16 = (short)-28703;
int zero = 0;
int var_19 = 59968800;
long long int var_20 = -3482269895165409813LL;
unsigned long long int var_21 = 2300101431118294239ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
