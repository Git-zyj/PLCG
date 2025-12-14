#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3171159406965176229LL;
long long int var_1 = -8522543957402539207LL;
long long int var_2 = -4209656856280199988LL;
long long int var_3 = -5929807039781704028LL;
long long int var_6 = -6536863273422881056LL;
signed char var_7 = (signed char)42;
long long int var_9 = 4977060273360484878LL;
int zero = 0;
long long int var_11 = 8076470149429376636LL;
signed char var_12 = (signed char)-115;
signed char var_13 = (signed char)-124;
long long int var_14 = -9129628908061082330LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
