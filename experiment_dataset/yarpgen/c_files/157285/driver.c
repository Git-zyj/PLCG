#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3791;
long long int var_2 = -6409875770315144809LL;
short var_5 = (short)-25024;
long long int var_6 = 5443031127853955398LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 14575201535216120614ULL;
int var_10 = 1011338773;
int zero = 0;
unsigned short var_11 = (unsigned short)33;
short var_12 = (short)-13052;
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
