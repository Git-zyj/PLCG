#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 6974018381191554785ULL;
int var_5 = -899618930;
unsigned int var_6 = 278660319U;
_Bool var_8 = (_Bool)0;
unsigned short var_11 = (unsigned short)22906;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = -454273933;
short var_14 = (short)-15573;
unsigned short var_15 = (unsigned short)44874;
unsigned long long int var_16 = 435647272564417750ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
