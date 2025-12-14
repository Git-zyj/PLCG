#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9034345327277684770LL;
short var_4 = (short)8027;
_Bool var_6 = (_Bool)1;
unsigned int var_9 = 3824875857U;
unsigned long long int var_12 = 1750053832034688297ULL;
unsigned int var_13 = 1794646575U;
int zero = 0;
signed char var_15 = (signed char)-82;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
