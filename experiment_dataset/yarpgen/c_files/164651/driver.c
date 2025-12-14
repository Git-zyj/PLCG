#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4180798400U;
long long int var_2 = -5725545058402687674LL;
unsigned char var_5 = (unsigned char)142;
long long int var_8 = -897258631616694284LL;
int zero = 0;
long long int var_10 = -4905602778690258393LL;
unsigned long long int var_11 = 7013615887713979979ULL;
unsigned char var_12 = (unsigned char)220;
unsigned int var_13 = 3627515840U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
