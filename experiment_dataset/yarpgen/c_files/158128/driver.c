#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29949;
unsigned int var_3 = 3330889108U;
unsigned int var_4 = 2106090045U;
unsigned char var_6 = (unsigned char)171;
unsigned int var_7 = 2240074457U;
long long int var_9 = -1814555647857544827LL;
unsigned char var_10 = (unsigned char)11;
short var_11 = (short)-15877;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_15 = 6533011609198679351LL;
short var_16 = (short)-13261;
unsigned long long int var_17 = 5591601821951482252ULL;
long long int var_18 = 4784784787514064366LL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
