#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9131988357815167893LL;
short var_2 = (short)-615;
signed char var_3 = (signed char)12;
long long int var_4 = -1980435231061438611LL;
signed char var_5 = (signed char)-66;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)107;
int zero = 0;
unsigned int var_14 = 1748311506U;
short var_15 = (short)-12763;
short var_16 = (short)-21546;
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
