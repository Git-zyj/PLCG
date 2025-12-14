#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -334868698;
unsigned char var_3 = (unsigned char)95;
unsigned char var_4 = (unsigned char)248;
long long int var_6 = -3482369948870233093LL;
int var_7 = 1161682097;
unsigned int var_8 = 2313278177U;
unsigned int var_9 = 3848626341U;
unsigned char var_10 = (unsigned char)11;
short var_11 = (short)26137;
int zero = 0;
unsigned int var_12 = 3420830303U;
unsigned short var_13 = (unsigned short)58168;
long long int var_14 = 5354854950792203861LL;
unsigned char var_15 = (unsigned char)129;
unsigned long long int var_16 = 8043929552643055731ULL;
int var_17 = 1488268900;
unsigned int var_18 = 2061001545U;
unsigned int var_19 = 418949095U;
unsigned char var_20 = (unsigned char)99;
long long int var_21 = -2432758995919408205LL;
unsigned long long int var_22 = 3909524415336936019ULL;
int var_23 = -186098134;
short var_24 = (short)26689;
int var_25 = -1228215943;
unsigned long long int var_26 = 6443595622838221793ULL;
short var_27 = (short)19785;
unsigned char var_28 = (unsigned char)244;
int var_29 = 180772818;
int var_30 = -667154374;
unsigned long long int var_31 = 15175442290762992479ULL;
int var_32 = 1567738591;
int var_33 = 1932069236;
unsigned long long int var_34 = 16413313338034098183ULL;
unsigned char var_35 = (unsigned char)55;
unsigned char var_36 = (unsigned char)209;
int arr_0 [21] ;
unsigned short arr_2 [23] ;
int arr_3 [23] ;
_Bool arr_4 [23] ;
unsigned char arr_6 [23] ;
unsigned char arr_7 [23] [23] ;
unsigned short arr_9 [23] [23] [23] ;
int arr_11 [23] [23] ;
int arr_12 [23] ;
long long int arr_13 [23] [23] [23] [23] ;
int arr_14 [23] [23] ;
unsigned char arr_15 [23] [23] [23] [23] [23] ;
unsigned long long int arr_16 [23] [23] [23] [23] [23] ;
int arr_17 [23] [23] [23] [23] [23] ;
unsigned short arr_18 [23] [23] [23] ;
unsigned long long int arr_20 [23] ;
unsigned short arr_21 [23] ;
int arr_23 [23] [23] ;
int arr_24 [23] ;
int arr_27 [16] ;
int arr_22 [23] [23] [23] ;
unsigned char arr_32 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -818613705;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)47321;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = -1893808250;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)330;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = -414671063;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = 2012427187;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 1498672573971592125LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = 2121129667;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 3592567935358846674ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = -1963807868;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned short)31187;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_20 [i_0] = 3710451297882219874ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = (unsigned short)45715;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_23 [i_0] [i_1] = -1143818312;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_24 [i_0] = -87563808;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_27 [i_0] = 2082206225;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = -1844072824;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_32 [i_0] = (unsigned char)35;
}

void checksum() {
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_32 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
