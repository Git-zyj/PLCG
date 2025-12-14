#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15952311988336412204ULL;
_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)17;
signed char var_6 = (signed char)-13;
long long int var_7 = -4364536187395959458LL;
unsigned char var_8 = (unsigned char)244;
unsigned long long int var_9 = 8806043295905898711ULL;
long long int var_10 = 5622493152272202586LL;
unsigned long long int var_11 = 13221724912117661671ULL;
_Bool var_13 = (_Bool)0;
unsigned short var_15 = (unsigned short)9308;
unsigned int var_16 = 2558577769U;
unsigned char var_17 = (unsigned char)106;
int zero = 0;
unsigned long long int var_18 = 4926007381062959662ULL;
unsigned char var_19 = (unsigned char)38;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 318563009587698594ULL;
unsigned int var_22 = 2852384195U;
int var_23 = -994699286;
unsigned short var_24 = (unsigned short)22218;
unsigned char var_25 = (unsigned char)201;
short var_26 = (short)-15958;
unsigned short var_27 = (unsigned short)54174;
unsigned long long int var_28 = 1384163401523780869ULL;
int arr_0 [17] ;
unsigned short arr_1 [17] ;
unsigned char arr_4 [17] ;
unsigned short arr_5 [17] [17] [17] ;
unsigned char arr_12 [19] ;
long long int arr_16 [19] [19] [19] ;
unsigned short arr_11 [17] [17] [17] [17] [17] ;
int arr_19 [19] [19] ;
unsigned char arr_20 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -1815085290;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)271;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)35943 : (unsigned short)7225;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = -4100830232240240614LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned short)32440 : (unsigned short)41543;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_19 [i_0] [i_1] = -1557700799;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned char)9;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
