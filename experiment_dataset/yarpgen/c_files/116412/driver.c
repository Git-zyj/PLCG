#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)189;
unsigned short var_9 = (unsigned short)29756;
unsigned long long int var_11 = 16841097093711401318ULL;
long long int var_13 = -6007342754540956118LL;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)51589;
int zero = 0;
unsigned long long int var_19 = 7915908881111748237ULL;
unsigned long long int var_20 = 15268681959432703191ULL;
unsigned short var_21 = (unsigned short)15464;
unsigned long long int var_22 = 10404396764117883109ULL;
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
