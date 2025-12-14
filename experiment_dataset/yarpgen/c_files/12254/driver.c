#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10222886102900520724ULL;
long long int var_1 = 6575413873340604833LL;
unsigned char var_2 = (unsigned char)200;
long long int var_3 = 365880205084101161LL;
_Bool var_4 = (_Bool)1;
short var_6 = (short)-14370;
_Bool var_7 = (_Bool)0;
signed char var_11 = (signed char)81;
signed char var_14 = (signed char)95;
short var_15 = (short)-1953;
int zero = 0;
unsigned int var_16 = 3181733129U;
signed char var_17 = (signed char)-59;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)64;
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
