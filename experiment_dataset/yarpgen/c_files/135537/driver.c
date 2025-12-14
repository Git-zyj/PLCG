#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2823039046U;
unsigned short var_4 = (unsigned short)40614;
_Bool var_6 = (_Bool)1;
long long int var_7 = 1585463761043207617LL;
unsigned long long int var_9 = 6200117398812496641ULL;
unsigned int var_11 = 3813060566U;
int zero = 0;
short var_12 = (short)-32530;
signed char var_13 = (signed char)107;
unsigned long long int var_14 = 407606941673146851ULL;
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
