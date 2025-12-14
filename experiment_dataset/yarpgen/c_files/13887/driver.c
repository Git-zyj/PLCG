#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4739841514553560015LL;
long long int var_5 = -4256891540782029153LL;
unsigned long long int var_7 = 12051425051655873620ULL;
int var_11 = -109951685;
int zero = 0;
signed char var_14 = (signed char)112;
unsigned int var_15 = 2643659882U;
unsigned long long int var_16 = 14061331187028786807ULL;
unsigned long long int var_17 = 14831543975131987138ULL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
