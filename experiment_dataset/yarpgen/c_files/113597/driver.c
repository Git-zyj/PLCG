#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)116;
unsigned char var_2 = (unsigned char)190;
unsigned long long int var_3 = 1481407217423643281ULL;
unsigned int var_5 = 2993276759U;
unsigned int var_7 = 2676251677U;
unsigned long long int var_8 = 5274554931929358671ULL;
short var_9 = (short)-3038;
unsigned char var_11 = (unsigned char)137;
unsigned int var_13 = 3882443805U;
long long int var_15 = 211114493781741097LL;
int zero = 0;
short var_16 = (short)-19335;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)144;
void init() {
}

void checksum() {
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
