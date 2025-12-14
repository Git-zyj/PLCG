#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_3 = -3951051302593918838LL;
signed char var_5 = (signed char)-24;
int var_9 = 134780254;
long long int var_10 = -309103132182146281LL;
short var_15 = (short)-9342;
int var_16 = 437467688;
int zero = 0;
int var_18 = -607097396;
short var_19 = (short)-12745;
signed char var_20 = (signed char)102;
void init() {
}

void checksum() {
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
