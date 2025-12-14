#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)69;
_Bool var_4 = (_Bool)1;
short var_11 = (short)-15279;
signed char var_14 = (signed char)-60;
unsigned int var_15 = 3980111801U;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 5310588464314208448ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)229;
short var_21 = (short)32722;
unsigned long long int var_22 = 5380347738519863033ULL;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
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
