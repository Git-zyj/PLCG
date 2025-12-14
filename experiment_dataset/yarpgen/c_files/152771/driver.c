#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5753780009341309775LL;
unsigned long long int var_7 = 3560838682448912880ULL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 5431806835669023612ULL;
int zero = 0;
signed char var_19 = (signed char)-9;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
