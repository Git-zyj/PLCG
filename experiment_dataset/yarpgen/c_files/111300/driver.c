#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13762015705100987719ULL;
signed char var_4 = (signed char)61;
short var_7 = (short)28514;
unsigned long long int var_9 = 12856791255528430482ULL;
unsigned int var_11 = 3056562769U;
int var_14 = 1100993797;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)225;
short var_19 = (short)3791;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 7062168387320309184ULL;
signed char var_22 = (signed char)40;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
