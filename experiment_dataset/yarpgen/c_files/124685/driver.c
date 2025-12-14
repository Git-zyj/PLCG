#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3650661376U;
_Bool var_8 = (_Bool)0;
int zero = 0;
int var_10 = 1076618982;
signed char var_11 = (signed char)-28;
unsigned int var_12 = 4162139143U;
long long int var_13 = 1112524311300760005LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
