#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)50397;
unsigned int var_4 = 1064885339U;
unsigned long long int var_5 = 10999065177979995669ULL;
long long int var_6 = 6949968033333567903LL;
int var_8 = 413237989;
long long int var_9 = -4265373997512765811LL;
signed char var_10 = (signed char)111;
int var_11 = -423381803;
int var_12 = -805123221;
unsigned short var_13 = (unsigned short)42952;
unsigned int var_14 = 1142658488U;
long long int var_15 = -7691185033423415694LL;
int zero = 0;
unsigned long long int var_16 = 16603868755904458847ULL;
unsigned short var_17 = (unsigned short)49619;
signed char var_18 = (signed char)-72;
unsigned int var_19 = 1644887779U;
long long int var_20 = -5387917026278406742LL;
signed char var_21 = (signed char)-87;
unsigned int var_22 = 3087589917U;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)31;
signed char var_25 = (signed char)59;
int var_26 = 619848864;
short var_27 = (short)-24386;
signed char arr_0 [23] [23] ;
unsigned long long int arr_1 [23] [23] ;
unsigned short arr_2 [23] ;
unsigned long long int arr_3 [23] ;
_Bool arr_4 [23] [23] ;
_Bool arr_5 [23] [23] [23] ;
unsigned char arr_6 [23] ;
signed char arr_7 [23] [23] ;
unsigned int arr_11 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-78 : (signed char)93;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 4642042176539300486ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)4478;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 1715841706563037037ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)99 : (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-90 : (signed char)-125;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 226866619U : 963991130U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
