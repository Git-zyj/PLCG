#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9391001881073193062ULL;
signed char var_5 = (signed char)107;
short var_9 = (short)11455;
short var_10 = (short)7129;
short var_14 = (short)-22821;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_20 = (short)-14037;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
