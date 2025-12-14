#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3317245635409822939LL;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
long long int var_7 = -4235214819651140707LL;
unsigned int var_10 = 4040514400U;
signed char var_11 = (signed char)80;
int zero = 0;
long long int var_12 = 2719459627220219960LL;
unsigned long long int var_13 = 15913812596552128017ULL;
short var_14 = (short)21251;
short var_15 = (short)8558;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
