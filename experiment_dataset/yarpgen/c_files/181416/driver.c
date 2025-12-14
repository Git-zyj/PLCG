#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)120;
short var_1 = (short)16344;
unsigned int var_2 = 3583830553U;
unsigned short var_4 = (unsigned short)37401;
int var_5 = 2117000558;
unsigned char var_7 = (unsigned char)239;
unsigned char var_9 = (unsigned char)66;
int var_10 = 1415939125;
long long int var_11 = -5656826944002730373LL;
short var_14 = (short)29855;
int zero = 0;
short var_16 = (short)-16870;
unsigned long long int var_17 = 14714712692818799743ULL;
unsigned int var_18 = 3484433206U;
unsigned short var_19 = (unsigned short)35192;
signed char var_20 = (signed char)121;
short var_21 = (short)28540;
_Bool arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
