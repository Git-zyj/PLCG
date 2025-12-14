#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)72;
short var_3 = (short)18926;
unsigned long long int var_4 = 186635998962831286ULL;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)55;
unsigned int var_9 = 1371589095U;
int zero = 0;
int var_12 = -711767903;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)96;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
