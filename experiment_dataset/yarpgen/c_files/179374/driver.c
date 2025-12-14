#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)299;
short var_1 = (short)-4481;
unsigned char var_2 = (unsigned char)161;
int var_3 = 1214376586;
long long int var_4 = -1863406461795605695LL;
unsigned long long int var_5 = 3114996229519207605ULL;
signed char var_7 = (signed char)48;
int var_8 = 1390585284;
unsigned long long int var_9 = 20993272466525524ULL;
int zero = 0;
long long int var_10 = -4702504520673737374LL;
unsigned short var_11 = (unsigned short)17907;
unsigned long long int var_12 = 10055289768548419344ULL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 2117482055745449424ULL;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)19;
unsigned int var_17 = 4017807879U;
long long int var_18 = -3552450584006628624LL;
unsigned short var_19 = (unsigned short)7707;
unsigned short var_20 = (unsigned short)40162;
signed char var_21 = (signed char)-30;
unsigned long long int var_22 = 11413465057458148693ULL;
unsigned short var_23 = (unsigned short)25361;
signed char var_24 = (signed char)60;
unsigned int var_25 = 210714688U;
short var_26 = (short)227;
_Bool var_27 = (_Bool)0;
long long int var_28 = 1924084221181909394LL;
unsigned int var_29 = 3577752270U;
_Bool var_30 = (_Bool)0;
long long int var_31 = 2351531693952816065LL;
signed char arr_0 [17] ;
signed char arr_1 [17] [17] ;
unsigned int arr_3 [13] [13] ;
short arr_4 [13] [13] ;
unsigned int arr_5 [13] ;
unsigned long long int arr_6 [13] ;
unsigned short arr_8 [13] [13] ;
signed char arr_9 [13] ;
unsigned short arr_10 [13] [13] [13] [13] ;
unsigned char arr_12 [13] [13] [13] [13] [13] ;
int arr_13 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-5;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 3856605754U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)5232 : (short)21021;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 2037895899U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 13624148363033064703ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)10909;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)60212 : (unsigned short)25918;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned char)51 : (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1093016599 : -755757435;
}

void checksum() {
    hash(&seed, var_10);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
