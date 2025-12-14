#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48022;
unsigned int var_5 = 3131965846U;
unsigned long long int var_7 = 16894830842062433728ULL;
signed char var_8 = (signed char)42;
int var_10 = 1158007609;
int zero = 0;
unsigned long long int var_11 = 17336205013188218424ULL;
signed char var_12 = (signed char)2;
long long int var_13 = -4247161020501323698LL;
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
