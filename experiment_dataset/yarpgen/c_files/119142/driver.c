#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8602478403297756474ULL;
int var_1 = -161898848;
unsigned short var_4 = (unsigned short)46313;
long long int var_5 = 7025292148135637410LL;
_Bool var_6 = (_Bool)1;
unsigned short var_9 = (unsigned short)1282;
unsigned long long int var_10 = 11055470276134123195ULL;
unsigned short var_12 = (unsigned short)31798;
unsigned short var_13 = (unsigned short)50167;
long long int var_14 = 213751441921730948LL;
unsigned int var_15 = 2714163787U;
unsigned long long int var_18 = 6415937248637042463ULL;
int zero = 0;
unsigned int var_19 = 4199290509U;
unsigned long long int var_20 = 12043001116634258852ULL;
long long int var_21 = -5806169934293889116LL;
signed char var_22 = (signed char)56;
signed char var_23 = (signed char)15;
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
