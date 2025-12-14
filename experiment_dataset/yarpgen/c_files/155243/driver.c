#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3948887759U;
unsigned int var_5 = 3909493484U;
_Bool var_7 = (_Bool)0;
signed char var_10 = (signed char)105;
unsigned int var_15 = 1742764325U;
int zero = 0;
unsigned char var_19 = (unsigned char)0;
signed char var_20 = (signed char)36;
long long int var_21 = -7606436557615667463LL;
unsigned long long int var_22 = 5412920462009135224ULL;
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
