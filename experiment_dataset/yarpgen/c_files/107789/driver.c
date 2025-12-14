#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10095567869553168753ULL;
unsigned char var_1 = (unsigned char)69;
unsigned int var_3 = 2238746883U;
unsigned int var_4 = 151320986U;
int var_6 = -85978591;
unsigned char var_7 = (unsigned char)227;
signed char var_8 = (signed char)-24;
unsigned char var_9 = (unsigned char)123;
int var_11 = -922283188;
unsigned char var_12 = (unsigned char)231;
int var_13 = -945600486;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = 8238313293660904461LL;
unsigned int var_16 = 2291053177U;
unsigned long long int var_17 = 6368680302681138245ULL;
unsigned short var_18 = (unsigned short)60024;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2923776237U;
short var_21 = (short)13958;
int var_22 = 1193667929;
unsigned int var_23 = 3757566919U;
long long int var_24 = 6012488293230132761LL;
unsigned char var_25 = (unsigned char)43;
int var_26 = 1948778575;
int var_27 = -582498399;
int var_28 = 124839441;
unsigned short var_29 = (unsigned short)11823;
_Bool var_30 = (_Bool)0;
short var_31 = (short)-28655;
unsigned long long int var_32 = 10825927518593902215ULL;
unsigned char var_33 = (unsigned char)16;
unsigned long long int var_34 = 12521296139332950125ULL;
unsigned short var_35 = (unsigned short)17850;
long long int var_36 = 8242825405948007351LL;
unsigned long long int var_37 = 17697980358882130524ULL;
unsigned char var_38 = (unsigned char)231;
unsigned short var_39 = (unsigned short)3147;
int var_40 = -1073511415;
unsigned int var_41 = 420216973U;
unsigned short var_42 = (unsigned short)14334;
unsigned char var_43 = (unsigned char)195;
_Bool var_44 = (_Bool)0;
int var_45 = -2038985013;
unsigned char var_46 = (unsigned char)35;
short var_47 = (short)-3277;
short arr_0 [20] [20] ;
unsigned long long int arr_2 [20] ;
unsigned int arr_4 [20] [20] [20] ;
long long int arr_5 [20] ;
short arr_6 [20] [20] [20] [20] ;
unsigned int arr_7 [20] [20] [20] [20] ;
unsigned char arr_8 [20] [20] [20] ;
signed char arr_11 [20] [20] [20] [20] [20] ;
short arr_21 [20] [20] ;
short arr_22 [20] ;
int arr_25 [20] [20] [20] [20] [20] [20] [20] ;
short arr_36 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (short)18415;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 18435935660056291868ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1535499840U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = -2762806631428188084LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)28758;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 126384766U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)54 : (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (signed char)-102 : (signed char)99;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_21 [i_0] [i_1] = (short)-31617;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_22 [i_0] = (short)17579;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 20; ++i_6) 
                                arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -317237296;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (short)-18374;
}

void checksum() {
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
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
