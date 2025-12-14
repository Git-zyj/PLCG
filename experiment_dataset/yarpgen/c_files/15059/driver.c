#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-20942;
short var_5 = (short)-19515;
unsigned int var_6 = 2038531910U;
unsigned int var_10 = 1794534525U;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1899689443U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
