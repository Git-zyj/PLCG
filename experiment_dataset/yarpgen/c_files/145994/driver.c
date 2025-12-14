#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7081;
unsigned int var_1 = 3970276792U;
long long int var_2 = -7699250932091524324LL;
signed char var_3 = (signed char)100;
signed char var_5 = (signed char)-100;
long long int var_6 = 6165532623942003311LL;
signed char var_7 = (signed char)42;
long long int var_8 = 2872748197574346086LL;
long long int var_9 = -6695029255312863802LL;
unsigned char var_10 = (unsigned char)66;
short var_11 = (short)15313;
long long int var_12 = -3361919438278560283LL;
unsigned char var_13 = (unsigned char)107;
unsigned long long int var_14 = 4940119764993506587ULL;
signed char var_15 = (signed char)80;
unsigned char var_16 = (unsigned char)167;
int var_17 = 351384096;
int zero = 0;
short var_18 = (short)-9785;
signed char var_19 = (signed char)11;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
