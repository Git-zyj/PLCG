#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4726584094479040598ULL;
signed char var_3 = (signed char)-6;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)153;
unsigned short var_8 = (unsigned short)6338;
long long int var_9 = 5892142972797172208LL;
long long int var_10 = 2067647174200943390LL;
int var_11 = 1322911811;
int zero = 0;
long long int var_12 = -6557470474666544106LL;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)62367;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)138;
unsigned short var_17 = (unsigned short)3456;
signed char var_18 = (signed char)53;
unsigned short var_19 = (unsigned short)44029;
short var_20 = (short)-18033;
_Bool var_21 = (_Bool)0;
unsigned char arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)34 : (unsigned char)16;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
