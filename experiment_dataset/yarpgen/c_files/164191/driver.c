#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_5 = 1772545055U;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 571764474U;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned short var_19 = (unsigned short)41305;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)6;
unsigned int var_22 = 850129598U;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 6239621557454986640ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
