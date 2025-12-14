#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1498927423;
int var_2 = -295572792;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)58499;
long long int var_7 = 4871583941921924985LL;
unsigned char var_8 = (unsigned char)234;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)25173;
int zero = 0;
long long int var_18 = 3797283946817308268LL;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 232366729U;
int var_21 = 1966525387;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
