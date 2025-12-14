#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_10 = 13827973587290503620ULL;
unsigned int var_12 = 2282397896U;
int var_13 = 1206718134;
long long int var_15 = 6001437093925625341LL;
int zero = 0;
long long int var_18 = -2905426813379422040LL;
unsigned char var_19 = (unsigned char)80;
unsigned long long int var_20 = 15791171997599362504ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
