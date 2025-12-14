#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)107;
unsigned int var_1 = 1023184317U;
unsigned long long int var_3 = 5360483923615169857ULL;
unsigned long long int var_4 = 6499708604238825204ULL;
short var_5 = (short)-21542;
unsigned int var_6 = 2216124810U;
unsigned long long int var_10 = 17972205785335953981ULL;
unsigned char var_11 = (unsigned char)105;
unsigned int var_12 = 1075792846U;
unsigned long long int var_15 = 5253375503297804384ULL;
unsigned char var_17 = (unsigned char)191;
int zero = 0;
short var_19 = (short)18723;
short var_20 = (short)27321;
unsigned int var_21 = 1327201992U;
unsigned long long int var_22 = 11491852965503265771ULL;
unsigned long long int var_23 = 12020432513411472300ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
