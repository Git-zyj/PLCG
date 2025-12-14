#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3153570464486577619LL;
unsigned long long int var_1 = 6902709990464467899ULL;
signed char var_4 = (signed char)26;
_Bool var_6 = (_Bool)0;
unsigned long long int var_9 = 7185766726930056703ULL;
long long int var_10 = -2657537548407901866LL;
int zero = 0;
signed char var_11 = (signed char)127;
short var_12 = (short)-32436;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
