#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)55;
unsigned long long int var_5 = 6610469651877721688ULL;
long long int var_6 = 3986724878838235190LL;
int var_9 = -554872934;
int var_11 = 1241239536;
short var_12 = (short)3431;
int var_13 = -1882228629;
int var_14 = 208734962;
int var_19 = 1414487409;
int zero = 0;
long long int var_20 = 3871316160234607377LL;
int var_21 = 1635730595;
void init() {
}

void checksum() {
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
