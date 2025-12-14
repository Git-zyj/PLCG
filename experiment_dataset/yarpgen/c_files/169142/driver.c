#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4732399898751649415ULL;
_Bool var_7 = (_Bool)0;
unsigned char var_11 = (unsigned char)189;
int zero = 0;
unsigned int var_17 = 2062612819U;
signed char var_18 = (signed char)-62;
long long int var_19 = -2055515058873073616LL;
signed char var_20 = (signed char)77;
long long int var_21 = -5953615095922948628LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
