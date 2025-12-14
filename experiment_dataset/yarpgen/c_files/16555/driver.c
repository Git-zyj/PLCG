#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
long long int var_3 = -6486380173118238985LL;
unsigned char var_4 = (unsigned char)41;
unsigned int var_6 = 1582857807U;
_Bool var_7 = (_Bool)1;
long long int var_14 = 1244389620806114366LL;
int var_16 = 1747733518;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
long long int var_19 = -6750862380508017687LL;
int zero = 0;
long long int var_20 = -5611019564818789828LL;
unsigned char var_21 = (unsigned char)180;
long long int var_22 = 2290961919126890460LL;
unsigned short var_23 = (unsigned short)41329;
long long int var_24 = 8677017604109728842LL;
unsigned char var_25 = (unsigned char)188;
long long int var_26 = -4063446793965192060LL;
long long int var_27 = -5082698812682886314LL;
unsigned int var_28 = 1932713485U;
unsigned short var_29 = (unsigned short)8731;
_Bool var_30 = (_Bool)0;
long long int var_31 = -9060789374381688862LL;
int var_32 = -362051084;
int var_33 = 1921482709;
unsigned char var_34 = (unsigned char)189;
unsigned short var_35 = (unsigned short)24261;
short var_36 = (short)-27014;
_Bool var_37 = (_Bool)0;
_Bool var_38 = (_Bool)1;
unsigned int var_39 = 3257725414U;
long long int var_40 = -8522589789879436169LL;
unsigned int arr_1 [23] ;
unsigned short arr_2 [23] ;
_Bool arr_3 [23] [23] ;
int arr_4 [23] ;
unsigned short arr_8 [21] [21] ;
_Bool arr_10 [21] [21] [21] ;
long long int arr_13 [21] [21] [21] [21] [21] [21] ;
unsigned short arr_20 [21] [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1080122702U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)45059;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 773723720;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)21163;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 112082357418171998LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned short)61747 : (unsigned short)19142;
}

void checksum() {
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
