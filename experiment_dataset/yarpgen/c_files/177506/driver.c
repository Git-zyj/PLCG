#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4800435637337862023ULL;
long long int var_2 = -6550187726314487429LL;
unsigned char var_3 = (unsigned char)24;
_Bool var_4 = (_Bool)0;
unsigned int var_7 = 2311516322U;
int var_8 = -890102028;
signed char var_10 = (signed char)-76;
long long int var_12 = 747071464673552921LL;
unsigned int var_13 = 1635533123U;
int var_16 = -379887771;
int zero = 0;
unsigned long long int var_17 = 17771833339715828401ULL;
unsigned long long int var_18 = 13813240487977998822ULL;
unsigned int var_19 = 2995710188U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
