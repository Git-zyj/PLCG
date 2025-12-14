#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 2900044898805123509LL;
unsigned long long int var_10 = 8429708475103801405ULL;
unsigned short var_13 = (unsigned short)55906;
int zero = 0;
long long int var_16 = 4015440123698775973LL;
long long int var_17 = 393381894600891050LL;
long long int var_18 = 3694738958169113695LL;
void init() {
}

void checksum() {
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
