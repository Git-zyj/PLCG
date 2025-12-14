#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)37;
signed char var_1 = (signed char)15;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)11;
signed char var_4 = (signed char)-113;
unsigned char var_5 = (unsigned char)119;
unsigned char var_7 = (unsigned char)78;
unsigned char var_8 = (unsigned char)201;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)54;
unsigned char var_11 = (unsigned char)132;
signed char var_12 = (signed char)-11;
unsigned char var_13 = (unsigned char)191;
unsigned short var_14 = (unsigned short)61090;
unsigned int var_15 = 3811029142U;
signed char var_16 = (signed char)-84;
unsigned char var_17 = (unsigned char)238;
int var_18 = -1009270199;
int zero = 0;
signed char var_19 = (signed char)-89;
unsigned short var_20 = (unsigned short)9612;
unsigned int var_21 = 1755152218U;
unsigned short var_22 = (unsigned short)41920;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)102;
_Bool var_25 = (_Bool)0;
unsigned long long int var_26 = 5742690286355747529ULL;
signed char var_27 = (signed char)110;
_Bool var_28 = (_Bool)1;
int var_29 = 667582004;
unsigned long long int var_30 = 12019563683608853308ULL;
unsigned short var_31 = (unsigned short)36386;
short var_32 = (short)16580;
unsigned char arr_6 [21] ;
unsigned char arr_12 [21] ;
signed char arr_19 [21] [21] [21] [21] [21] ;
unsigned char arr_32 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)238 : (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)180 : (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (signed char)-70 : (signed char)-54;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)37 : (unsigned char)60;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_32 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
