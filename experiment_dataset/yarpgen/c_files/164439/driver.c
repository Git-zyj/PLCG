#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3565563796U;
long long int var_1 = 6260732809978549575LL;
unsigned short var_2 = (unsigned short)63931;
unsigned char var_3 = (unsigned char)145;
int var_4 = 625717064;
int var_5 = -1113260721;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 3059901773U;
signed char var_9 = (signed char)23;
unsigned int var_10 = 1925047032U;
signed char var_11 = (signed char)83;
unsigned int var_13 = 3490904482U;
unsigned long long int var_14 = 7432708432497164938ULL;
unsigned short var_15 = (unsigned short)42190;
long long int var_16 = -8094301879565463613LL;
long long int var_17 = -267232203700918482LL;
int zero = 0;
int var_18 = -809204336;
int var_19 = 195035246;
signed char var_20 = (signed char)-18;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
