#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8360810165543894130ULL;
short var_5 = (short)16335;
signed char var_8 = (signed char)30;
signed char var_9 = (signed char)11;
_Bool var_10 = (_Bool)1;
signed char var_13 = (signed char)-66;
int zero = 0;
short var_15 = (short)15734;
short var_16 = (short)9145;
unsigned int var_17 = 1289382508U;
short var_18 = (short)-10942;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
