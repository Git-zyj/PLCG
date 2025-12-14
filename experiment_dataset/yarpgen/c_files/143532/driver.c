#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40768;
_Bool var_3 = (_Bool)0;
int var_5 = 1299818510;
short var_6 = (short)-7699;
unsigned char var_7 = (unsigned char)132;
short var_10 = (short)-2076;
unsigned char var_14 = (unsigned char)34;
_Bool var_15 = (_Bool)1;
unsigned short var_17 = (unsigned short)13388;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = 1555385814;
long long int var_21 = 3200799857572530585LL;
short var_22 = (short)-3730;
unsigned int var_23 = 2327315733U;
long long int var_24 = 5800978993803257233LL;
unsigned short var_25 = (unsigned short)58868;
short var_26 = (short)26832;
unsigned short var_27 = (unsigned short)19842;
long long int var_28 = 3829185117338905812LL;
long long int var_29 = 1839132395570436658LL;
signed char var_30 = (signed char)-82;
unsigned char var_31 = (unsigned char)127;
unsigned char arr_1 [17] ;
int arr_2 [17] [17] ;
signed char arr_3 [17] ;
_Bool arr_4 [17] ;
long long int arr_8 [17] [17] ;
long long int arr_5 [17] ;
long long int arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 879974402 : -1420425364;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = -6709535920736462108LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 3504649524087356409LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = -8131068067659125341LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
