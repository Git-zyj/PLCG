#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -264068070;
long long int var_6 = -2869213622314029476LL;
int var_8 = 149247097;
long long int var_10 = -5242285597574185186LL;
int zero = 0;
long long int var_16 = -3190090518364994192LL;
unsigned short var_17 = (unsigned short)4476;
long long int var_18 = -250288187921895022LL;
long long int var_19 = -5072015633168930970LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
