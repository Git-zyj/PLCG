#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21094;
signed char var_4 = (signed char)123;
_Bool var_5 = (_Bool)0;
long long int var_7 = 2342145461584236750LL;
short var_8 = (short)-3297;
int zero = 0;
short var_12 = (short)-10246;
short var_13 = (short)-18619;
void init() {
}

void checksum() {
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
