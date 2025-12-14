#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2776038643203425420ULL;
unsigned int var_2 = 4215581253U;
short var_4 = (short)-24080;
_Bool var_5 = (_Bool)0;
unsigned int var_9 = 867256888U;
short var_12 = (short)22431;
_Bool var_13 = (_Bool)0;
unsigned int var_16 = 812354656U;
int zero = 0;
unsigned char var_18 = (unsigned char)67;
unsigned char var_19 = (unsigned char)47;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
