#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 471641342;
long long int var_1 = 2009798424544451877LL;
signed char var_2 = (signed char)-92;
signed char var_4 = (signed char)10;
int var_5 = 1587555075;
int var_6 = -1123919815;
signed char var_7 = (signed char)28;
long long int var_10 = -8769211492105823719LL;
int zero = 0;
signed char var_11 = (signed char)-105;
signed char var_12 = (signed char)-54;
signed char var_13 = (signed char)-49;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
