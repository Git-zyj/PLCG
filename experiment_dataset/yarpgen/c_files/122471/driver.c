#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)79;
unsigned long long int var_2 = 11580126196334213562ULL;
unsigned long long int var_5 = 4801696102911016367ULL;
unsigned int var_6 = 377976418U;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_19 = 2476434634097252722LL;
unsigned char var_20 = (unsigned char)181;
int var_21 = -587365514;
unsigned int var_22 = 3761597809U;
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
