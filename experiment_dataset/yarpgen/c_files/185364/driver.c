#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5990535822429916926LL;
signed char var_4 = (signed char)3;
short var_6 = (short)13197;
unsigned char var_8 = (unsigned char)223;
int var_9 = 1831564894;
signed char var_11 = (signed char)-34;
unsigned char var_13 = (unsigned char)235;
int zero = 0;
signed char var_15 = (signed char)87;
int var_16 = -1860332980;
short var_17 = (short)-20283;
long long int var_18 = -6605784953399149229LL;
void init() {
}

void checksum() {
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
