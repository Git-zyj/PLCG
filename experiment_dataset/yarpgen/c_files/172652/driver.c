#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13319;
signed char var_5 = (signed char)50;
_Bool var_11 = (_Bool)1;
signed char var_17 = (signed char)-87;
unsigned int var_18 = 3034745786U;
int zero = 0;
long long int var_20 = 8845211617443332263LL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 3679926262U;
long long int var_23 = -2376417024947043654LL;
void init() {
}

void checksum() {
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
