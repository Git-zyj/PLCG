#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-43;
unsigned short var_3 = (unsigned short)43892;
unsigned short var_4 = (unsigned short)17622;
long long int var_5 = 4494156656996189824LL;
unsigned short var_6 = (unsigned short)52544;
unsigned short var_9 = (unsigned short)56302;
unsigned char var_10 = (unsigned char)40;
int zero = 0;
unsigned long long int var_11 = 5040160723376782821ULL;
unsigned short var_12 = (unsigned short)65305;
unsigned short var_13 = (unsigned short)15468;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-108;
long long int var_16 = 8690811173214435211LL;
signed char var_17 = (signed char)126;
unsigned int var_18 = 3466315187U;
short var_19 = (short)18789;
long long int var_20 = 4460131769008550809LL;
int arr_1 [18] [18] ;
unsigned short arr_2 [18] [18] ;
unsigned short arr_4 [11] [11] ;
int arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = -610884319;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)50846;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)16032;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -1368539183 : 62699173;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
