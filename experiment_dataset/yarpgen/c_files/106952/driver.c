#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)169;
unsigned int var_3 = 999602833U;
unsigned char var_6 = (unsigned char)212;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
int zero = 0;
int var_11 = -1876859880;
long long int var_12 = 3063104553113445529LL;
void init() {
}

void checksum() {
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
