#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)38450;
unsigned char var_5 = (unsigned char)172;
long long int var_12 = 716406391652145300LL;
signed char var_15 = (signed char)50;
int zero = 0;
signed char var_18 = (signed char)30;
unsigned int var_19 = 3181345614U;
unsigned long long int var_20 = 11096814148325111155ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
