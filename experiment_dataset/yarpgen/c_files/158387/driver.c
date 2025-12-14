#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)208;
long long int var_4 = -2475878906044914462LL;
unsigned char var_5 = (unsigned char)106;
long long int var_7 = 3874643820362114323LL;
unsigned short var_10 = (unsigned short)33647;
unsigned short var_14 = (unsigned short)26964;
unsigned long long int var_15 = 4058140748755130671ULL;
unsigned long long int var_16 = 11087104168582820955ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)64107;
unsigned char var_20 = (unsigned char)117;
int var_21 = -1910835988;
void init() {
}

void checksum() {
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
