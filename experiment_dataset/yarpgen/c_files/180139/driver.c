#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2738898402U;
unsigned short var_1 = (unsigned short)3450;
long long int var_2 = 6265410589802266487LL;
long long int var_3 = 8942109033088352268LL;
long long int var_4 = -3717897032825968662LL;
unsigned short var_6 = (unsigned short)32501;
signed char var_7 = (signed char)99;
unsigned char var_9 = (unsigned char)87;
int zero = 0;
unsigned long long int var_12 = 2781786928429495309ULL;
unsigned int var_13 = 1600800488U;
int var_14 = -1748637474;
_Bool var_15 = (_Bool)1;
int var_16 = -615377077;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
