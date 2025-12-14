#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6323760818399831861LL;
unsigned int var_3 = 2488641385U;
unsigned short var_6 = (unsigned short)37775;
long long int var_9 = 430578970402374680LL;
signed char var_10 = (signed char)34;
unsigned long long int var_11 = 878761680538521487ULL;
_Bool var_12 = (_Bool)1;
unsigned short var_14 = (unsigned short)4760;
int zero = 0;
int var_15 = 941446907;
signed char var_16 = (signed char)-49;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
