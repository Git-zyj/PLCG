#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41898;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)12201;
short var_5 = (short)28095;
unsigned int var_14 = 1732537116U;
long long int var_15 = -1130466750162346013LL;
int zero = 0;
unsigned int var_16 = 2298807342U;
unsigned int var_17 = 3678360498U;
unsigned long long int var_18 = 3072869953105172759ULL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
