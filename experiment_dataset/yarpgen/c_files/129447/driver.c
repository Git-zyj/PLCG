#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14404989744353245887ULL;
int var_1 = -86663597;
signed char var_2 = (signed char)39;
signed char var_3 = (signed char)-87;
unsigned char var_4 = (unsigned char)32;
unsigned char var_5 = (unsigned char)255;
signed char var_6 = (signed char)93;
int var_7 = 1907567793;
unsigned short var_8 = (unsigned short)63699;
signed char var_11 = (signed char)79;
long long int var_12 = -3291332817289011002LL;
int var_13 = -1382608704;
signed char var_15 = (signed char)35;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_18 = -2667744102684306658LL;
unsigned char var_19 = (unsigned char)132;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 9416566294267639309ULL;
unsigned long long int var_23 = 4563752474533172500ULL;
int var_24 = -862459846;
unsigned int var_25 = 25679998U;
unsigned short var_26 = (unsigned short)23316;
signed char var_27 = (signed char)-98;
unsigned int var_28 = 3314493957U;
_Bool var_29 = (_Bool)0;
unsigned short var_30 = (unsigned short)24225;
_Bool arr_7 [14] [14] [14] [14] ;
unsigned short arr_8 [14] ;
int arr_9 [14] [14] [14] ;
_Bool arr_10 [14] ;
long long int arr_12 [14] [14] [14] [14] [14] [14] ;
long long int arr_14 [25] [25] ;
short arr_15 [25] ;
unsigned short arr_16 [25] ;
int arr_17 [25] ;
int arr_20 [25] ;
unsigned char arr_21 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (unsigned short)62665;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 30683943;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 2981483560001298879LL : -6364533960362082045LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = -1115221902276881935LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (short)17200;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = (unsigned short)27108;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = -1407104868;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? -459933087 : 542062158;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (unsigned char)160 : (unsigned char)236;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
