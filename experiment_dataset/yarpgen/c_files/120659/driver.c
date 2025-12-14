#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10588640431747794510ULL;
signed char var_2 = (signed char)54;
short var_4 = (short)1093;
unsigned long long int var_5 = 4378081986850538934ULL;
short var_7 = (short)-4641;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 482194678307609307ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 8875158021975850684ULL;
unsigned long long int var_18 = 3024956025304556920ULL;
long long int var_19 = 4919637136435535039LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
