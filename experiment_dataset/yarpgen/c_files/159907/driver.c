#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8623419848917870467LL;
long long int var_2 = -2554069637202914170LL;
long long int var_3 = 6508047360019344892LL;
long long int var_4 = -6365152671134696522LL;
int var_6 = -378693391;
int var_8 = 2123073461;
int var_10 = 443206316;
unsigned long long int var_11 = 6117755565734772961ULL;
int zero = 0;
int var_14 = -2019471597;
unsigned short var_15 = (unsigned short)30952;
signed char var_16 = (signed char)-63;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
