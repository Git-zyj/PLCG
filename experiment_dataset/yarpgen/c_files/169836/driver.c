#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-5;
unsigned short var_1 = (unsigned short)49241;
unsigned short var_2 = (unsigned short)8949;
long long int var_3 = 7964235516425644600LL;
long long int var_5 = -4878102337055868701LL;
signed char var_6 = (signed char)98;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)10763;
unsigned int var_9 = 908670669U;
unsigned int var_10 = 1193164839U;
long long int var_11 = -4817004275571391746LL;
signed char var_12 = (signed char)45;
int zero = 0;
signed char var_13 = (signed char)87;
long long int var_14 = 4719848043513543291LL;
long long int var_15 = -7211858495680218688LL;
long long int var_16 = 8943189674379570640LL;
unsigned long long int var_17 = 10236375379219641074ULL;
unsigned long long int var_18 = 15595987552497028589ULL;
signed char var_19 = (signed char)-72;
signed char var_20 = (signed char)15;
signed char var_21 = (signed char)6;
unsigned long long int var_22 = 8590991964744195171ULL;
unsigned int var_23 = 266085347U;
unsigned short var_24 = (unsigned short)57999;
unsigned int var_25 = 2225765685U;
unsigned short var_26 = (unsigned short)3923;
signed char var_27 = (signed char)-68;
long long int var_28 = -5151377331951268819LL;
unsigned int var_29 = 3341687724U;
unsigned char var_30 = (unsigned char)49;
short var_31 = (short)-11145;
unsigned short var_32 = (unsigned short)39467;
unsigned int arr_0 [23] ;
unsigned int arr_1 [23] ;
unsigned long long int arr_2 [23] ;
signed char arr_4 [23] [23] [23] ;
long long int arr_5 [23] ;
short arr_6 [23] [23] ;
long long int arr_7 [23] [23] [23] [23] ;
short arr_8 [23] [23] [23] [23] ;
long long int arr_9 [23] [23] [23] [23] ;
unsigned long long int arr_10 [23] [23] [23] [23] ;
long long int arr_11 [23] [23] [23] [23] ;
long long int arr_12 [23] [23] [23] [23] ;
signed char arr_15 [23] [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 796577666U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 3706932912U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 9352181718984621345ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)121 : (signed char)-56;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 5836681390297445129LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-5317 : (short)5000;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 4468386049395134252LL : 7281554015369462822LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)-9640;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -6324358390111081677LL : -4416598378925665885LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 2972662842305975646ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = -8146373913844881268LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 7813643347292872914LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-88;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
