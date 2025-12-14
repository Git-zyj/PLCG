#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-47;
long long int var_2 = -1372677597437794261LL;
_Bool var_6 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 8129317513598043536ULL;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)87;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
