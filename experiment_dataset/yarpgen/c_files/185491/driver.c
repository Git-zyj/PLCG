#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15194;
unsigned long long int var_5 = 6205199215014816537ULL;
unsigned short var_6 = (unsigned short)14930;
int var_7 = -731294655;
long long int var_8 = 7488085644874666322LL;
unsigned long long int var_10 = 5834262006110546786ULL;
unsigned int var_16 = 2766189918U;
unsigned long long int var_17 = 8257926674278484069ULL;
int zero = 0;
unsigned int var_20 = 614507828U;
unsigned int var_21 = 2402460483U;
int var_22 = 1694270196;
unsigned int var_23 = 7837998U;
unsigned int var_24 = 201036249U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
