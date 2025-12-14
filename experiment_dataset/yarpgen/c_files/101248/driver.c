#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11460448030358658111ULL;
long long int var_5 = -5768516320642065129LL;
unsigned short var_6 = (unsigned short)52469;
long long int var_13 = -4925794612361641671LL;
unsigned long long int var_15 = 2899271662789132760ULL;
short var_16 = (short)-29520;
_Bool var_19 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 18251130877586759597ULL;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 14602362359622896029ULL;
unsigned char var_25 = (unsigned char)22;
long long int var_26 = 467727220034971755LL;
unsigned long long int var_27 = 16576835166967550805ULL;
unsigned long long int var_28 = 6751758162211986895ULL;
int var_29 = -1132833530;
unsigned int var_30 = 2726791889U;
_Bool var_31 = (_Bool)1;
short arr_0 [14] [14] ;
signed char arr_1 [14] ;
_Bool arr_3 [14] [14] [14] ;
unsigned char arr_5 [14] [14] ;
long long int arr_8 [14] ;
unsigned char arr_9 [14] ;
unsigned int arr_14 [14] ;
unsigned short arr_18 [14] [14] [14] [14] ;
unsigned long long int arr_19 [14] [14] [14] [14] [14] ;
_Bool arr_6 [14] ;
unsigned int arr_11 [14] [14] ;
unsigned int arr_16 [14] ;
short arr_21 [14] [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-8616;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)-112;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = -8949084003568009033LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = 2122889207U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (unsigned short)9406;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = 10603107996177726052ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = 2842654589U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = 3882472062U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (short)29366 : (short)-2462;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
