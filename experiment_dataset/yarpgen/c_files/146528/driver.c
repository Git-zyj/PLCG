#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_3 = -2703724733090984893LL;
unsigned int var_4 = 104055460U;
signed char var_5 = (signed char)-99;
unsigned int var_8 = 4181613027U;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned long long int var_13 = 12211153976614725963ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 2300665494U;
unsigned char var_20 = (unsigned char)49;
int var_21 = 777975431;
void init() {
}

void checksum() {
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
