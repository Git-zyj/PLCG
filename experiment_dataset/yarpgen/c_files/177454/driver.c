#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_5 = 8014444959340448724LL;
long long int var_6 = 900806570958705596LL;
unsigned char var_8 = (unsigned char)17;
unsigned char var_11 = (unsigned char)84;
unsigned long long int var_12 = 6660578800176931592ULL;
unsigned char var_15 = (unsigned char)226;
unsigned long long int var_17 = 17075137561087957791ULL;
int zero = 0;
long long int var_19 = -4014271594352489756LL;
int var_20 = 983108092;
unsigned int var_21 = 3302154178U;
long long int var_22 = 2411918187611477923LL;
int var_23 = -1076467622;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
