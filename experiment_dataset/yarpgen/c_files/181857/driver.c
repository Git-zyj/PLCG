#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1916280585U;
_Bool var_1 = (_Bool)0;
long long int var_9 = 3933349060129672696LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_12 = 7562297858090154116LL;
unsigned int var_13 = 47789195U;
unsigned short var_14 = (unsigned short)30271;
unsigned short var_15 = (unsigned short)48743;
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
