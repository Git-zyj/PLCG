#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_11 = (short)-3656;
long long int var_12 = -8369579423240794472LL;
signed char var_17 = (signed char)120;
int zero = 0;
long long int var_19 = 3880131262429650649LL;
unsigned int var_20 = 676842682U;
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
