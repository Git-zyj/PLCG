#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = -726355253;
unsigned long long int var_3 = 5933439475334277919ULL;
unsigned int var_4 = 3280649306U;
signed char var_6 = (signed char)-32;
long long int var_8 = -1832297334980862284LL;
unsigned long long int var_10 = 13988559195028597456ULL;
int zero = 0;
int var_11 = 504682415;
long long int var_12 = 5739685460875106810LL;
unsigned int var_13 = 3123682242U;
unsigned long long int var_14 = 4145851197604467296ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
