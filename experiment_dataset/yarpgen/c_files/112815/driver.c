#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 451288549;
signed char var_1 = (signed char)90;
signed char var_2 = (signed char)-87;
int var_3 = 1494629943;
_Bool var_4 = (_Bool)1;
long long int var_5 = 8958261765770097425LL;
int var_6 = -1977821708;
long long int var_8 = 7732693621700199176LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = -373458664;
long long int var_12 = -7558092287163629066LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
