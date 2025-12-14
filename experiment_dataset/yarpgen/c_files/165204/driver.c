#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2145987288793070141LL;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)-115;
unsigned int var_9 = 2225901644U;
int var_12 = -2085087655;
unsigned char var_14 = (unsigned char)105;
int var_15 = 377458319;
int zero = 0;
unsigned int var_16 = 1406081699U;
unsigned int var_17 = 4232112176U;
unsigned int var_18 = 4094948803U;
signed char var_19 = (signed char)110;
int var_20 = -1216692846;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
