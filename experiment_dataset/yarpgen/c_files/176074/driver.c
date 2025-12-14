#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2868811426U;
_Bool var_2 = (_Bool)1;
unsigned short var_5 = (unsigned short)55241;
unsigned long long int var_6 = 4641622692858413435ULL;
int var_7 = 1874210696;
long long int var_11 = -3828601542526132928LL;
short var_12 = (short)17163;
int zero = 0;
unsigned int var_14 = 1186679799U;
unsigned int var_15 = 1442668026U;
long long int var_16 = 1689742956848103827LL;
void init() {
}

void checksum() {
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
