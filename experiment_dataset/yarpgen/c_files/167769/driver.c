#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7500278139774713243LL;
_Bool var_1 = (_Bool)0;
unsigned int var_3 = 1585112898U;
signed char var_4 = (signed char)104;
int zero = 0;
int var_10 = 232860810;
short var_11 = (short)29684;
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
