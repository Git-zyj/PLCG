#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -743308517990533025LL;
int var_12 = -1403613387;
unsigned short var_19 = (unsigned short)50890;
int zero = 0;
short var_20 = (short)23856;
signed char var_21 = (signed char)-27;
unsigned long long int var_22 = 11690527713091026304ULL;
void init() {
}

void checksum() {
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
