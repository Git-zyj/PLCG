#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 307246437707041840LL;
unsigned int var_3 = 3417618436U;
long long int var_5 = 4806776464140488460LL;
unsigned long long int var_9 = 9225092413742503152ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_13 = (unsigned char)68;
signed char var_14 = (signed char)81;
unsigned long long int var_15 = 17751213540605465426ULL;
long long int var_16 = -298934661551993371LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
