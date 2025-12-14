#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2577196769U;
unsigned long long int var_4 = 6050282698758258874ULL;
unsigned long long int var_6 = 16570426024023194876ULL;
long long int var_12 = 1482275631098747936LL;
int zero = 0;
unsigned int var_13 = 389152809U;
signed char var_14 = (signed char)-118;
short var_15 = (short)-27877;
long long int var_16 = 8405104635479593374LL;
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
