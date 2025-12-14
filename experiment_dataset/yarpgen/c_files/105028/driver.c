#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3994396894U;
_Bool var_1 = (_Bool)1;
unsigned int var_8 = 74193509U;
signed char var_14 = (signed char)41;
int zero = 0;
unsigned long long int var_17 = 15966479096540000437ULL;
unsigned int var_18 = 2876597148U;
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
