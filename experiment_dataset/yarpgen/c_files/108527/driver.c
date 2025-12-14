#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)116;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 5448947533426699062ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_9 = 2302760777U;
int zero = 0;
short var_12 = (short)15283;
long long int var_13 = -2812009188467972671LL;
short var_14 = (short)-19208;
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
