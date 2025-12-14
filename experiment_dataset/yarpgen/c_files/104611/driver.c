#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)23658;
unsigned long long int var_4 = 12601660402470578999ULL;
int var_6 = 1639866744;
unsigned int var_9 = 2452437620U;
long long int var_10 = -5132290372857495379LL;
unsigned int var_12 = 2998618660U;
unsigned char var_16 = (unsigned char)83;
int zero = 0;
unsigned long long int var_20 = 6443527280959341910ULL;
unsigned int var_21 = 2956750156U;
unsigned long long int var_22 = 6524720988187963730ULL;
long long int var_23 = -2527554664472521498LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
