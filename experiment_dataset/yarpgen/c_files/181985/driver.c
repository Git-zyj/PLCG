#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8784356583667140549LL;
int var_1 = 515046803;
short var_2 = (short)10088;
unsigned long long int var_4 = 3769905260896434832ULL;
_Bool var_11 = (_Bool)0;
unsigned int var_13 = 2229687306U;
unsigned long long int var_15 = 17588509600918570043ULL;
unsigned int var_17 = 1500171025U;
unsigned int var_18 = 1834122172U;
int zero = 0;
unsigned int var_19 = 1641920306U;
short var_20 = (short)7434;
unsigned long long int var_21 = 9805471955388419028ULL;
unsigned char var_22 = (unsigned char)159;
int var_23 = -1502905163;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
