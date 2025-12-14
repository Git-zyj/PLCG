#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5855620520692772520LL;
long long int var_1 = 8867933911704442823LL;
unsigned short var_2 = (unsigned short)13561;
long long int var_3 = -3611047951852372121LL;
long long int var_4 = -1274824463228908880LL;
long long int var_5 = 4521092794388463610LL;
unsigned long long int var_6 = 18181535602154512579ULL;
long long int var_7 = -3100621106676367237LL;
unsigned long long int var_9 = 14407507199294421495ULL;
unsigned long long int var_10 = 10886674775208998871ULL;
long long int var_11 = -2754480282067201939LL;
unsigned char var_12 = (unsigned char)246;
long long int var_14 = -3504004940465304246LL;
unsigned long long int var_15 = 17904688424466676684ULL;
signed char var_16 = (signed char)-21;
int zero = 0;
unsigned char var_17 = (unsigned char)75;
signed char var_18 = (signed char)45;
unsigned long long int var_19 = 9170581110076613498ULL;
unsigned char var_20 = (unsigned char)145;
long long int var_21 = -7545569138948342396LL;
unsigned short var_22 = (unsigned short)31203;
signed char var_23 = (signed char)61;
unsigned short var_24 = (unsigned short)26616;
unsigned short var_25 = (unsigned short)56761;
unsigned char var_26 = (unsigned char)179;
signed char var_27 = (signed char)29;
unsigned short var_28 = (unsigned short)35565;
unsigned char var_29 = (unsigned char)112;
long long int var_30 = 7142346151278103301LL;
signed char var_31 = (signed char)78;
unsigned short var_32 = (unsigned short)33659;
signed char arr_1 [12] [12] ;
unsigned long long int arr_4 [12] [12] ;
long long int arr_7 [12] [12] [12] ;
unsigned char arr_9 [12] ;
unsigned long long int arr_11 [19] ;
unsigned char arr_12 [19] [19] [19] ;
long long int arr_13 [19] ;
unsigned short arr_18 [19] [19] [19] [19] ;
unsigned char arr_22 [19] [19] [19] ;
unsigned long long int arr_26 [19] [19] ;
long long int arr_29 [16] ;
long long int arr_16 [19] [19] [19] [19] ;
signed char arr_19 [19] [19] [19] [19] [19] ;
long long int arr_20 [19] ;
unsigned long long int arr_23 [19] ;
signed char arr_28 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-103;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 1985865246949418736ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -8048356848603795006LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = 5576483896672077798ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -3125912365224465080LL : 4512026080506845416LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (unsigned short)29661;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (unsigned char)127;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_26 [i_0] [i_1] = 3256450144619513324ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_29 [i_0] = 8332802609325781961LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 3837784723166333510LL : -5078754314378350911LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (signed char)36 : (signed char)88;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_20 [i_0] = 4909348446178833765LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = 14882315921532019950ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-43 : (signed char)-100;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
