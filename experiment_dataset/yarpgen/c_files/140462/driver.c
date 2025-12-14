#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)226;
short var_2 = (short)30565;
signed char var_4 = (signed char)98;
int var_6 = 1971992301;
short var_7 = (short)22627;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)187;
unsigned char var_10 = (unsigned char)243;
int zero = 0;
int var_11 = 482594118;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 12456720011765476414ULL;
int var_14 = -911064196;
unsigned char var_15 = (unsigned char)105;
unsigned long long int var_16 = 9284725136664029873ULL;
unsigned short var_17 = (unsigned short)26982;
unsigned long long int var_18 = 9657015239228781995ULL;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)61703;
unsigned char var_21 = (unsigned char)151;
long long int var_22 = 9077593617237027040LL;
unsigned long long int var_23 = 8196965016247886245ULL;
unsigned short var_24 = (unsigned short)17747;
long long int var_25 = -1272180891556700422LL;
int var_26 = -1440856693;
unsigned long long int arr_0 [24] ;
short arr_2 [24] ;
long long int arr_6 [13] ;
long long int arr_9 [13] ;
short arr_19 [25] [25] ;
unsigned long long int arr_23 [25] ;
short arr_24 [25] ;
unsigned long long int arr_26 [25] [25] [25] [25] [25] [25] ;
_Bool arr_28 [20] ;
long long int arr_29 [20] [20] ;
unsigned int arr_39 [20] [20] [20] [20] [20] [20] [20] ;
unsigned long long int arr_4 [24] ;
unsigned short arr_7 [13] ;
unsigned long long int arr_41 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 11744909327581926396ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)-30461;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = -6110327030021688939LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = 4181588289864556903LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_19 [i_0] [i_1] = (short)-25375;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_23 [i_0] = 17136820948104725882ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_24 [i_0] = (short)-19846;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 643081301001124383ULL : 11793058446064108197ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_28 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_29 [i_0] [i_1] = (i_1 % 2 == 0) ? 2875585289850988701LL : 3294023060076391510LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 20; ++i_6) 
                                arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_3 % 2 == 0) ? 3635513683U : 2070489842U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 7163458115046743139ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (unsigned short)54766;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_41 [i_0] [i_1] = (i_0 % 2 == 0) ? 7240413848985720671ULL : 11427230057437923925ULL;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_41 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
