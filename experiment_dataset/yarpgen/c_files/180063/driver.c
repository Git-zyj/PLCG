#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12117522911840089285ULL;
_Bool var_7 = (_Bool)1;
long long int var_8 = -307571189355654731LL;
unsigned long long int var_12 = 734402998253805023ULL;
int zero = 0;
unsigned long long int var_14 = 9479252501269557728ULL;
long long int var_15 = -4517811559120200280LL;
void init() {
}

void checksum() {
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
