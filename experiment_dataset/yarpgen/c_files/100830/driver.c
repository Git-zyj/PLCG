#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7357465433835377362LL;
unsigned long long int var_10 = 8783540237216404237ULL;
unsigned int var_15 = 1725648803U;
int zero = 0;
long long int var_19 = -4718770645585779216LL;
long long int var_20 = 6584630758741611122LL;
_Bool var_21 = (_Bool)1;
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
