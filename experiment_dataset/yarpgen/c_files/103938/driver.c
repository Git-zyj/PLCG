#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 741338164;
long long int var_2 = 931641884796065115LL;
unsigned int var_3 = 3698051285U;
signed char var_4 = (signed char)17;
_Bool var_5 = (_Bool)0;
unsigned int var_9 = 285124284U;
int zero = 0;
unsigned char var_10 = (unsigned char)126;
unsigned long long int var_11 = 18437093905773616864ULL;
int var_12 = -48189850;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
