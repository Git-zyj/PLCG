#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 927849146;
unsigned int var_1 = 2226259429U;
long long int var_7 = -5489178246137756148LL;
_Bool var_9 = (_Bool)0;
int var_10 = 1249553848;
_Bool var_13 = (_Bool)1;
long long int var_15 = -5642986263433803567LL;
int zero = 0;
unsigned char var_18 = (unsigned char)49;
unsigned short var_19 = (unsigned short)24145;
long long int var_20 = -3988026701518411410LL;
int var_21 = -1098250289;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
