#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28783;
unsigned long long int var_5 = 2564635905109742655ULL;
long long int var_9 = 4300246734547983380LL;
int zero = 0;
unsigned int var_11 = 1853338817U;
unsigned int var_12 = 381667454U;
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
