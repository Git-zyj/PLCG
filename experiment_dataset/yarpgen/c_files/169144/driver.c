#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)23;
int var_3 = -1150164500;
int var_4 = 1807690842;
signed char var_5 = (signed char)-2;
int var_6 = -429976464;
unsigned short var_7 = (unsigned short)45779;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)52;
unsigned char var_10 = (unsigned char)3;
unsigned char var_11 = (unsigned char)178;
unsigned short var_13 = (unsigned short)39058;
unsigned int var_14 = 2813898931U;
unsigned char var_15 = (unsigned char)241;
int zero = 0;
unsigned char var_16 = (unsigned char)212;
unsigned int var_17 = 429365017U;
long long int var_18 = -7300830211377358809LL;
unsigned char var_19 = (unsigned char)252;
unsigned int var_20 = 2990724032U;
unsigned int var_21 = 4012246929U;
short var_22 = (short)12502;
unsigned short var_23 = (unsigned short)11489;
unsigned char var_24 = (unsigned char)59;
long long int var_25 = 4315737269717512627LL;
unsigned char var_26 = (unsigned char)87;
int var_27 = -1692170437;
short var_28 = (short)24814;
long long int var_29 = -2972835700659992493LL;
_Bool var_30 = (_Bool)1;
long long int arr_0 [22] [22] ;
unsigned int arr_1 [22] ;
signed char arr_3 [22] ;
int arr_9 [22] [22] ;
short arr_12 [22] ;
short arr_13 [22] [22] [22] [22] ;
unsigned char arr_17 [22] ;
unsigned char arr_18 [22] ;
long long int arr_20 [22] [22] ;
unsigned char arr_21 [22] [22] [22] [22] ;
unsigned char arr_22 [22] ;
long long int arr_36 [12] [12] [12] [12] ;
_Bool arr_4 [22] ;
short arr_11 [22] [22] [22] [22] [22] ;
_Bool arr_24 [22] [22] ;
unsigned int arr_38 [12] ;
signed char arr_39 [12] [12] ;
unsigned char arr_40 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = -9093724969846639428LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 3349806808U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (signed char)56;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = -695714396;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (short)2653;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (short)12320;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_20 [i_0] [i_1] = 8735763490040853635LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -8780402897316678789LL : -4175209700633712420LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-12577;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? 689563340U : 3834198211U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_39 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)38 : (signed char)49;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)114 : (unsigned char)187;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_39 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_40 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
