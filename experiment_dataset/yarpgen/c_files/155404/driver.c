#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_5 = 1829413116U;
unsigned short var_6 = (unsigned short)35924;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 8772657396239833239ULL;
unsigned long long int var_10 = 3973260647256068905ULL;
int zero = 0;
long long int var_11 = 7505930807467585054LL;
unsigned short var_12 = (unsigned short)11093;
signed char var_13 = (signed char)-26;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
