#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3733977874U;
unsigned int var_1 = 3961723295U;
unsigned char var_2 = (unsigned char)142;
short var_4 = (short)7340;
short var_5 = (short)-1184;
short var_6 = (short)-13713;
short var_7 = (short)31049;
unsigned char var_8 = (unsigned char)77;
unsigned short var_10 = (unsigned short)38749;
int zero = 0;
long long int var_11 = -606198617898466696LL;
unsigned short var_12 = (unsigned short)3366;
int var_13 = 1192011945;
long long int var_14 = -3433435907073434578LL;
_Bool var_15 = (_Bool)0;
int var_16 = 1032215826;
unsigned short var_17 = (unsigned short)14195;
short var_18 = (short)-25684;
int var_19 = -1429722213;
unsigned int var_20 = 1605036358U;
unsigned short arr_1 [21] [21] ;
long long int arr_3 [21] [21] [21] ;
unsigned short arr_10 [21] [21] [21] [21] [21] [21] ;
long long int arr_20 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)42822 : (unsigned short)50928;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 8868379004521006801LL : -2783689587198290375LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (unsigned short)26949 : (unsigned short)8330;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? -3280532846904827115LL : -123808825230523961LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
