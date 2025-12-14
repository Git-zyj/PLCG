#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9201630297042090756LL;
short var_2 = (short)3022;
long long int var_12 = -2139210517262287909LL;
short var_13 = (short)30546;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -3311534881983031647LL;
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
