#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2756843983U;
long long int var_1 = -2362922448243900634LL;
unsigned long long int var_2 = 10157303469333425519ULL;
long long int var_6 = 1445346149368961553LL;
long long int var_7 = 7693624700843402074LL;
int var_8 = -836184033;
long long int var_9 = -8612575879274440327LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 8494985157299906980ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
