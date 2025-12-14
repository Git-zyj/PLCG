#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11068;
long long int var_3 = 4141781057785487912LL;
signed char var_4 = (signed char)-56;
unsigned long long int var_5 = 12412652639821849518ULL;
short var_9 = (short)-24048;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 625960337U;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
