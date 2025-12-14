#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5657498501310302142LL;
long long int var_1 = 3353107399852915633LL;
unsigned int var_2 = 811565988U;
unsigned int var_3 = 3440174496U;
long long int var_4 = -7599808666811026742LL;
_Bool var_5 = (_Bool)1;
long long int var_9 = -5940121861002830176LL;
int zero = 0;
unsigned long long int var_10 = 5929926935368076760ULL;
short var_11 = (short)15077;
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
