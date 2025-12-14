#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11965065577528180306ULL;
long long int var_3 = -1805569328957335304LL;
_Bool var_4 = (_Bool)1;
int zero = 0;
short var_17 = (short)31313;
short var_18 = (short)-22310;
void init() {
}

void checksum() {
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
