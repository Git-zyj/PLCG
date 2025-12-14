#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28253;
int var_2 = 57029935;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)87;
signed char var_7 = (signed char)-25;
int var_8 = 1807194358;
signed char var_9 = (signed char)91;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
signed char var_14 = (signed char)9;
unsigned long long int var_15 = 8321069553254296656ULL;
unsigned char var_16 = (unsigned char)233;
int zero = 0;
unsigned long long int var_17 = 18297096925682180326ULL;
short var_18 = (short)-27747;
int var_19 = 626981595;
signed char var_20 = (signed char)63;
long long int var_21 = -5699825912633588778LL;
short arr_0 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)-14314;
}

void checksum() {
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
