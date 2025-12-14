#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-112;
long long int var_7 = 6967854893802766117LL;
unsigned long long int var_15 = 3619696484931682664ULL;
unsigned short var_19 = (unsigned short)11981;
int zero = 0;
unsigned long long int var_20 = 4725380064700193249ULL;
_Bool var_21 = (_Bool)0;
short var_22 = (short)9960;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
