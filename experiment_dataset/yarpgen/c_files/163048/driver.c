#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 952568316;
long long int var_9 = -2794039713285702998LL;
long long int var_10 = -6515303994880462017LL;
int zero = 0;
int var_14 = -1982851311;
int var_15 = 1403832012;
int var_16 = 1130977746;
unsigned char var_17 = (unsigned char)140;
long long int var_18 = 3687761199833587288LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
