#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15264236516450202870ULL;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)246;
short var_7 = (short)-17422;
int zero = 0;
signed char var_17 = (signed char)122;
int var_18 = -713942708;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
