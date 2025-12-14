#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)227;
short var_10 = (short)13425;
unsigned long long int var_12 = 10881938773598181090ULL;
unsigned char var_14 = (unsigned char)247;
unsigned char var_15 = (unsigned char)169;
unsigned int var_16 = 3941927987U;
int zero = 0;
signed char var_17 = (signed char)35;
_Bool var_18 = (_Bool)1;
long long int var_19 = 1419500432127869964LL;
int var_20 = 265549998;
unsigned int var_21 = 754892348U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
