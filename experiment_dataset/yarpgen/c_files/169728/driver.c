#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3967643538877550079LL;
signed char var_5 = (signed char)54;
unsigned long long int var_10 = 9674392776500248960ULL;
unsigned long long int var_11 = 16390696801407267876ULL;
int zero = 0;
unsigned long long int var_12 = 4877436786806022455ULL;
unsigned long long int var_13 = 15107777964663581372ULL;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 332287414U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
