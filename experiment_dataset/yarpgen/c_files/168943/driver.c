#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)85;
unsigned int var_3 = 3996442252U;
unsigned long long int var_4 = 4837412733140263466ULL;
unsigned int var_5 = 2946889341U;
short var_7 = (short)19452;
unsigned int var_8 = 2095913198U;
unsigned char var_11 = (unsigned char)208;
unsigned short var_12 = (unsigned short)49934;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-10;
int zero = 0;
short var_18 = (short)302;
unsigned short var_19 = (unsigned short)19602;
long long int var_20 = 7052698000776266315LL;
unsigned char var_21 = (unsigned char)226;
_Bool var_22 = (_Bool)1;
short var_23 = (short)21814;
unsigned char var_24 = (unsigned char)12;
unsigned short var_25 = (unsigned short)26754;
unsigned int var_26 = 1526152147U;
unsigned long long int var_27 = 2145475098510916127ULL;
unsigned short var_28 = (unsigned short)13396;
short var_29 = (short)11547;
unsigned int arr_0 [20] [20] ;
long long int arr_1 [20] [20] ;
unsigned char arr_2 [20] ;
long long int arr_4 [20] ;
long long int arr_5 [20] ;
unsigned long long int arr_6 [20] ;
signed char arr_7 [20] [20] [20] [20] ;
unsigned int arr_9 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 2656280653U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = -6013571412701171103LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 392308624591765602LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 4337981265852796885LL : 763084703308410519LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 13594015073793368462ULL : 12289884111434755028ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)85 : (signed char)108;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 2979286492U : 2468718194U;
}

void checksum() {
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
