#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15318257685235375838ULL;
unsigned char var_1 = (unsigned char)39;
signed char var_2 = (signed char)-42;
int var_3 = 459819598;
long long int var_5 = -2319465360428082228LL;
signed char var_7 = (signed char)113;
int var_8 = -779762725;
short var_10 = (short)32681;
int zero = 0;
unsigned int var_11 = 3042891573U;
unsigned long long int var_12 = 3174777957045510697ULL;
short var_13 = (short)9279;
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
