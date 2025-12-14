#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1127972517;
unsigned int var_1 = 458930876U;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)-51;
long long int var_12 = 7912286376586796209LL;
unsigned short var_13 = (unsigned short)59058;
signed char var_14 = (signed char)15;
unsigned int var_15 = 919096034U;
int zero = 0;
int var_16 = 2005815515;
unsigned short var_17 = (unsigned short)24898;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
