#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)55889;
int zero = 0;
signed char var_19 = (signed char)91;
unsigned long long int var_20 = 9844399603639833375ULL;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 3058221608U;
unsigned int var_24 = 3581497542U;
unsigned long long int var_25 = 14347773299710583084ULL;
unsigned short var_26 = (unsigned short)22101;
unsigned int var_27 = 1089966708U;
unsigned short var_28 = (unsigned short)21109;
short var_29 = (short)29097;
unsigned int var_30 = 3447922784U;
_Bool var_31 = (_Bool)1;
unsigned int var_32 = 1374247956U;
unsigned short var_33 = (unsigned short)1040;
_Bool var_34 = (_Bool)0;
unsigned short var_35 = (unsigned short)50072;
long long int var_36 = -1908695490098711707LL;
int arr_0 [14] [14] ;
unsigned short arr_1 [14] ;
unsigned char arr_4 [14] [14] [14] ;
unsigned int arr_5 [14] [14] [14] ;
unsigned char arr_8 [19] ;
long long int arr_10 [19] [19] ;
unsigned short arr_12 [17] ;
unsigned short arr_13 [17] [17] ;
signed char arr_14 [17] ;
unsigned long long int arr_15 [17] ;
unsigned int arr_16 [17] [17] [17] ;
unsigned int arr_17 [17] [17] [17] [17] ;
unsigned long long int arr_18 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 374709120;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)7706;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 184650645U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (unsigned char)80;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = -3266452651476378052LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)46269 : (unsigned short)18998;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)51046 : (unsigned short)60893;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (signed char)-126 : (signed char)-12;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = 8886172913106172709ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 738630827U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 238897790U : 2536297798U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = 14124017177514011058ULL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
