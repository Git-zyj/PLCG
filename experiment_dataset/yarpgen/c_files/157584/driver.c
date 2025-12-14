#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3012528431349639821LL;
int var_4 = 2001762303;
int var_6 = -936790067;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-122;
int var_11 = 1307564883;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-120;
_Bool var_21 = (_Bool)1;
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
