#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 7310926798670739229ULL;
long long int var_4 = 9049568225806152873LL;
_Bool var_7 = (_Bool)1;
int var_9 = 1711148170;
int var_10 = -932053703;
_Bool var_11 = (_Bool)1;
signed char var_15 = (signed char)-28;
int zero = 0;
signed char var_20 = (signed char)12;
unsigned int var_21 = 1704259534U;
int var_22 = 765686624;
unsigned long long int var_23 = 16143586283451821380ULL;
unsigned char var_24 = (unsigned char)215;
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
