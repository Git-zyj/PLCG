#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)160;
int var_7 = 1750517835;
signed char var_8 = (signed char)51;
signed char var_11 = (signed char)-28;
long long int var_12 = -7117798846968264118LL;
long long int var_15 = 2276911625337575654LL;
int zero = 0;
signed char var_18 = (signed char)50;
unsigned char var_19 = (unsigned char)167;
long long int var_20 = -3097599009267262407LL;
unsigned char var_21 = (unsigned char)60;
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
