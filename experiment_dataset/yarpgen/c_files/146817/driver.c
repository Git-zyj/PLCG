#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)7114;
short var_4 = (short)-3504;
unsigned int var_6 = 2692781061U;
long long int var_7 = -7352792001839042207LL;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-24;
unsigned long long int var_11 = 207169208957485970ULL;
int var_12 = 156846905;
unsigned long long int var_13 = 7925417730873577243ULL;
int zero = 0;
signed char var_14 = (signed char)-100;
unsigned char var_15 = (unsigned char)46;
signed char var_16 = (signed char)121;
unsigned short var_17 = (unsigned short)47648;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
