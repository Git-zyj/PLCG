#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5512346350834945358ULL;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)12047;
unsigned char var_5 = (unsigned char)183;
unsigned int var_6 = 1645974368U;
unsigned long long int var_8 = 10634893688884616985ULL;
int zero = 0;
int var_11 = 1227368458;
unsigned char var_12 = (unsigned char)59;
int var_13 = 1938021749;
unsigned int var_14 = 190096467U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
