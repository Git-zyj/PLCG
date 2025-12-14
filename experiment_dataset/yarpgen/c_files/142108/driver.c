#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14856;
unsigned short var_4 = (unsigned short)52248;
_Bool var_5 = (_Bool)0;
long long int var_6 = 6225875089136276362LL;
unsigned long long int var_7 = 17578607774559530033ULL;
unsigned char var_9 = (unsigned char)182;
signed char var_10 = (signed char)-1;
short var_12 = (short)8426;
int var_13 = 660779615;
unsigned long long int var_14 = 7325334426634757679ULL;
int zero = 0;
long long int var_15 = 7533747017851556767LL;
unsigned long long int var_16 = 2438811010671302370ULL;
int var_17 = 1469008929;
unsigned long long int var_18 = 4180974573388230493ULL;
unsigned char var_19 = (unsigned char)114;
unsigned long long int var_20 = 4639725826303987478ULL;
int var_21 = 464601568;
unsigned int var_22 = 405801622U;
int var_23 = 2048416159;
unsigned short var_24 = (unsigned short)12409;
unsigned long long int var_25 = 2483595216993121170ULL;
int var_26 = -80107039;
unsigned char var_27 = (unsigned char)205;
signed char var_28 = (signed char)-34;
signed char var_29 = (signed char)-82;
_Bool var_30 = (_Bool)1;
unsigned int var_31 = 1773807198U;
long long int var_32 = 2371978443711414230LL;
unsigned int var_33 = 1183458069U;
unsigned long long int arr_0 [16] ;
unsigned short arr_1 [16] [16] ;
unsigned long long int arr_2 [16] [16] ;
int arr_5 [14] [14] ;
int arr_6 [14] [14] ;
int arr_8 [14] ;
int arr_9 [14] [14] [14] ;
int arr_10 [14] ;
unsigned int arr_11 [14] [14] [14] ;
int arr_12 [14] [14] ;
int arr_13 [14] [14] [14] ;
int arr_14 [14] [14] [14] [14] [14] [14] ;
unsigned char arr_17 [10] ;
signed char arr_18 [10] ;
short arr_19 [10] ;
_Bool arr_24 [10] [10] ;
unsigned long long int arr_25 [10] ;
unsigned int arr_27 [10] ;
int arr_28 [10] [10] ;
_Bool arr_31 [10] [10] [10] [10] [10] ;
signed char arr_35 [10] [10] [10] [10] [10] [10] ;
unsigned int arr_39 [10] ;
unsigned short arr_3 [16] ;
int arr_4 [16] ;
unsigned long long int arr_15 [14] ;
unsigned char arr_16 [14] ;
unsigned long long int arr_36 [10] [10] ;
unsigned int arr_37 [10] [10] ;
int arr_38 [10] [10] ;
int arr_41 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 435936353895888290ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)19209;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 2875307746163249055ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 645119705 : 210358397;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = 1669405043;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -1099360672 : -1189217375;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -295854215 : -1005977379;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = -1585752914;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3901901235U : 1870500819U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = -637334569;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -592770595;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -755603053;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = (short)-3175;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_24 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_25 [i_0] = 12332997420879310735ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_27 [i_0] = 3449206165U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_28 [i_0] [i_1] = (i_1 % 2 == 0) ? 593056183 : 358882538;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_39 [i_0] = 430823988U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned short)45416;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -25660786;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 12263917125230258174ULL : 1839466142856745193ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned char)234 : (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_36 [i_0] [i_1] = 7870386693749156441ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_37 [i_0] [i_1] = 1762936145U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_38 [i_0] [i_1] = 1955509866;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_41 [i_0] = 1391001335;
}

void checksum() {
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_36 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_38 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_41 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
