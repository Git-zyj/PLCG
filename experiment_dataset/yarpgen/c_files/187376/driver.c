#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)55;
unsigned long long int var_7 = 12181644558948266988ULL;
unsigned short var_12 = (unsigned short)868;
long long int var_14 = -5558804389927014939LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 13742365036190502543ULL;
unsigned int var_21 = 647380290U;
long long int var_22 = -5838422952701264291LL;
unsigned long long int var_23 = 1994131895930904885ULL;
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
