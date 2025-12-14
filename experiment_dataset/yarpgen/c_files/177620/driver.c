#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_10 = -150833019;
_Bool var_11 = (_Bool)0;
unsigned int var_13 = 2393427002U;
unsigned long long int var_15 = 17658483555330134695ULL;
unsigned short var_16 = (unsigned short)4482;
int zero = 0;
unsigned short var_19 = (unsigned short)49300;
unsigned long long int var_20 = 9380012371489168142ULL;
int var_21 = 1342491117;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 3779123108U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
