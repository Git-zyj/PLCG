#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)29286;
long long int var_3 = -1776672628415509026LL;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)51233;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 9305265414668615212ULL;
unsigned long long int var_22 = 3834001266765864919ULL;
short var_23 = (short)-12586;
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
