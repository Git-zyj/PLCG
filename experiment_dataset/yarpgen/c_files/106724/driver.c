#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16670423409277689549ULL;
unsigned long long int var_3 = 3723319381148668460ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_11 = 2143418456U;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)26110;
int var_15 = 562468199;
int zero = 0;
unsigned int var_16 = 2260509182U;
unsigned short var_17 = (unsigned short)16545;
unsigned char var_18 = (unsigned char)0;
unsigned int var_19 = 2637499207U;
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
