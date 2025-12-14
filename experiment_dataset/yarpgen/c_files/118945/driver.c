#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15300;
unsigned long long int var_1 = 15919340468530622913ULL;
unsigned int var_2 = 2337806130U;
_Bool var_4 = (_Bool)0;
int var_5 = 479861021;
int var_6 = -381764342;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)36;
unsigned long long int var_9 = 12050656789849980485ULL;
unsigned int var_10 = 4025551285U;
int var_11 = 2068503224;
unsigned long long int var_12 = 17341882364456011912ULL;
int zero = 0;
int var_13 = 1123943444;
_Bool var_14 = (_Bool)1;
short var_15 = (short)7527;
long long int var_16 = -9061876192685437510LL;
unsigned short var_17 = (unsigned short)6283;
unsigned long long int var_18 = 15298693902793598579ULL;
long long int var_19 = 568744352770486302LL;
unsigned char var_20 = (unsigned char)185;
_Bool var_21 = (_Bool)0;
int var_22 = 1360881880;
long long int var_23 = -7409747859997796193LL;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)105;
int var_26 = 818665179;
int var_27 = 853130263;
_Bool var_28 = (_Bool)0;
signed char var_29 = (signed char)-78;
unsigned short var_30 = (unsigned short)45969;
unsigned short arr_0 [15] ;
unsigned int arr_1 [15] ;
_Bool arr_2 [15] [15] [15] ;
_Bool arr_3 [15] [15] ;
unsigned int arr_4 [15] ;
_Bool arr_9 [15] [15] [15] [15] ;
unsigned long long int arr_10 [15] [15] [15] [15] ;
long long int arr_11 [15] [15] [15] [15] ;
unsigned long long int arr_16 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)54927;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 884767170U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 2213164523U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 539615400584721341ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = -6780547597370445928LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 15997110583318500270ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
