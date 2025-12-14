#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-13567;
unsigned long long int var_4 = 17814308848217496141ULL;
short var_6 = (short)-30636;
unsigned char var_10 = (unsigned char)0;
unsigned long long int var_12 = 2731405634033871955ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)35;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
