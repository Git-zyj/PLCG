#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2805605318363506637ULL;
short var_6 = (short)19512;
unsigned long long int var_8 = 16483400709834243408ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)28491;
_Bool var_11 = (_Bool)0;
short var_12 = (short)21542;
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
