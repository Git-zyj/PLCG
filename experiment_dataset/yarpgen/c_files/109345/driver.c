#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)96;
unsigned long long int var_1 = 4821972692367410136ULL;
int var_3 = 1603617003;
signed char var_5 = (signed char)22;
unsigned long long int var_6 = 1661511239839588021ULL;
signed char var_7 = (signed char)-8;
long long int var_8 = -7388480972169869279LL;
unsigned long long int var_10 = 5854728736500105775ULL;
unsigned int var_11 = 2563918160U;
int var_12 = -893552450;
unsigned char var_13 = (unsigned char)155;
unsigned short var_14 = (unsigned short)41748;
unsigned char var_15 = (unsigned char)60;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 11498075280730942914ULL;
unsigned int var_18 = 133934732U;
int zero = 0;
unsigned int var_19 = 2195680801U;
int var_20 = 1476805792;
void init() {
}

void checksum() {
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
