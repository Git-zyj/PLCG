#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2657802044U;
long long int var_4 = -5694798556893237700LL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_10 = 6640464896222739738ULL;
unsigned long long int var_12 = 10320257130774533876ULL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 7628528458973642059ULL;
int zero = 0;
signed char var_15 = (signed char)31;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 233965958680711127ULL;
long long int var_18 = 3752629673176905245LL;
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
