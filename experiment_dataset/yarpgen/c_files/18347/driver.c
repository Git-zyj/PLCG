#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)92;
_Bool var_1 = (_Bool)0;
unsigned char var_4 = (unsigned char)209;
_Bool var_5 = (_Bool)1;
long long int var_7 = 6103134535819148318LL;
long long int var_9 = -5119324244383194823LL;
unsigned char var_13 = (unsigned char)176;
unsigned int var_14 = 3866292647U;
int zero = 0;
unsigned char var_16 = (unsigned char)237;
short var_17 = (short)16184;
unsigned char var_18 = (unsigned char)193;
void init() {
}

void checksum() {
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
