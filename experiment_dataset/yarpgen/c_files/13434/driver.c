#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9006944044527238130LL;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)0;
short var_14 = (short)6356;
long long int var_15 = 8846838094627790047LL;
int zero = 0;
unsigned int var_19 = 3450427819U;
short var_20 = (short)-3551;
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
