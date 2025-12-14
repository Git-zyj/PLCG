#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned long long int var_15 = 18296637439117955384ULL;
int zero = 0;
short var_16 = (short)14720;
signed char var_17 = (signed char)-54;
unsigned long long int var_18 = 1497777458147889333ULL;
signed char var_19 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
