#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6001519599402541065LL;
_Bool var_2 = (_Bool)1;
long long int var_3 = -5651690280299327969LL;
long long int var_4 = 8457170334204950556LL;
unsigned long long int var_8 = 8081582565917461669ULL;
long long int var_9 = 7650975527080162805LL;
long long int var_10 = -910934443391926375LL;
long long int var_14 = 6034659345088959279LL;
int zero = 0;
unsigned char var_15 = (unsigned char)88;
long long int var_16 = -9110916973870149550LL;
long long int var_17 = 3674726862607057208LL;
int var_18 = -1312626822;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
