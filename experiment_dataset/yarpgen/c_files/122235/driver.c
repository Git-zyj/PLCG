#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 916735986007748231LL;
_Bool var_5 = (_Bool)0;
long long int var_6 = 1616392409471922437LL;
long long int var_8 = 6134329338897092514LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned short var_10 = (unsigned short)47628;
long long int var_11 = -2688785331050110858LL;
long long int var_12 = -7967468858800078329LL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
