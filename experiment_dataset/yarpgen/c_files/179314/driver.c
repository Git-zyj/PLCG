#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
long long int var_5 = -3292201633090891831LL;
unsigned short var_7 = (unsigned short)54888;
unsigned char var_9 = (unsigned char)5;
unsigned short var_10 = (unsigned short)54495;
signed char var_13 = (signed char)112;
int zero = 0;
signed char var_15 = (signed char)-80;
unsigned int var_16 = 1196026238U;
unsigned int var_17 = 754955652U;
int var_18 = 394093743;
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
