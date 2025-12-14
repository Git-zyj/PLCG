#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12005075052469953ULL;
_Bool var_6 = (_Bool)0;
long long int var_9 = -2674657503341838731LL;
int var_10 = -1043789328;
unsigned int var_17 = 2042108391U;
int zero = 0;
short var_19 = (short)-11710;
short var_20 = (short)13385;
unsigned int var_21 = 1358742035U;
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
