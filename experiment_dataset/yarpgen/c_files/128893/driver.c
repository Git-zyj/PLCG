#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4172029869275201031ULL;
_Bool var_1 = (_Bool)0;
int var_4 = -232163027;
int var_6 = 1449937974;
unsigned int var_9 = 920259226U;
int var_11 = 448113429;
long long int var_12 = 8036955964317095688LL;
long long int var_13 = -4639725723093263373LL;
signed char var_14 = (signed char)-86;
int zero = 0;
unsigned long long int var_15 = 7757533996314642206ULL;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -8952677675316513746LL;
void init() {
}

void checksum() {
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
