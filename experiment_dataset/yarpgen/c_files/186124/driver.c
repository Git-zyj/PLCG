#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)33761;
unsigned short var_9 = (unsigned short)27912;
unsigned short var_10 = (unsigned short)6367;
unsigned int var_14 = 453331059U;
_Bool var_15 = (_Bool)1;
int var_17 = 11712529;
unsigned long long int var_18 = 11514739975418188465ULL;
int zero = 0;
unsigned int var_19 = 246421494U;
long long int var_20 = -5047546640973996876LL;
signed char var_21 = (signed char)-67;
unsigned short var_22 = (unsigned short)4807;
long long int var_23 = 3544605234592454174LL;
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
