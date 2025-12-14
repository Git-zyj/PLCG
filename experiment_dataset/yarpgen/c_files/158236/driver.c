#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2887047881958451174LL;
unsigned int var_4 = 3467514850U;
unsigned long long int var_8 = 6462942031946319299ULL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 10749272982833725646ULL;
int var_12 = 509255335;
int zero = 0;
long long int var_13 = -5260459025769078988LL;
long long int var_14 = -2296716734443898781LL;
unsigned long long int var_15 = 8071932761666384743ULL;
void init() {
}

void checksum() {
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
