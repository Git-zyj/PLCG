#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57379;
unsigned long long int var_4 = 7689019750924184029ULL;
unsigned long long int var_5 = 17236271116489483466ULL;
unsigned long long int var_6 = 1715361080956532573ULL;
unsigned int var_9 = 253510668U;
long long int var_10 = -432901773562015284LL;
unsigned long long int var_14 = 6676543399188431339ULL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 14038499890659351671ULL;
short var_18 = (short)16680;
int zero = 0;
int var_19 = -989737725;
int var_20 = 1705475090;
unsigned int var_21 = 2432810891U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
