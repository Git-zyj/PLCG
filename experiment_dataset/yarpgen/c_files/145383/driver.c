#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2573630523U;
signed char var_2 = (signed char)-117;
long long int var_6 = -926838380653333096LL;
signed char var_8 = (signed char)94;
short var_11 = (short)23028;
_Bool var_13 = (_Bool)1;
unsigned int var_16 = 2797877800U;
int zero = 0;
int var_18 = -2027976869;
int var_19 = 1860000458;
unsigned int var_20 = 1813134347U;
long long int var_21 = -6039260697435849741LL;
_Bool var_22 = (_Bool)0;
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
