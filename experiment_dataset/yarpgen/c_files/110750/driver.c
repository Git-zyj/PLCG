#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 359789689046240959ULL;
long long int var_7 = 8606440911571118594LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)-13261;
_Bool var_14 = (_Bool)0;
long long int var_15 = 6275726094242424964LL;
short var_16 = (short)-12893;
long long int var_17 = 4532501090056927133LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
