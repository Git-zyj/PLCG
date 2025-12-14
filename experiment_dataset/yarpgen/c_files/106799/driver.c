#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7483463300588436981LL;
long long int var_1 = 2306617605027870262LL;
unsigned long long int var_3 = 1060300492369975321ULL;
unsigned int var_7 = 3928280969U;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)24144;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
