#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 832307837336006785ULL;
signed char var_7 = (signed char)-75;
long long int var_9 = -4653403888050402142LL;
int zero = 0;
unsigned long long int var_10 = 10102643600555850008ULL;
int var_11 = 426324515;
unsigned long long int var_12 = 13790392785239075738ULL;
unsigned long long int var_13 = 14897780833885069563ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
