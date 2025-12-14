#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16048552978776668905ULL;
long long int var_2 = 9032938831654602859LL;
_Bool var_4 = (_Bool)1;
long long int var_5 = 1099373744263430020LL;
long long int var_8 = 2861916774945415709LL;
int var_10 = -60216865;
unsigned char var_13 = (unsigned char)181;
unsigned int var_14 = 3212660875U;
int zero = 0;
signed char var_16 = (signed char)-51;
unsigned int var_17 = 718099761U;
unsigned char var_18 = (unsigned char)78;
short var_19 = (short)24061;
signed char var_20 = (signed char)-102;
unsigned int var_21 = 3480105276U;
unsigned char var_22 = (unsigned char)84;
long long int var_23 = 8295045029711429348LL;
signed char var_24 = (signed char)-31;
long long int var_25 = 4078810780797929360LL;
short var_26 = (short)-11684;
signed char var_27 = (signed char)-101;
signed char arr_0 [20] ;
unsigned char arr_1 [20] ;
signed char arr_4 [14] ;
unsigned int arr_5 [22] ;
long long int arr_7 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-32 : (signed char)-33;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)146 : (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 768706534U : 2472090650U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? -9074681686898454676LL : 3513427473445899371LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
