#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5722463361227773913LL;
unsigned int var_1 = 1454230193U;
unsigned long long int var_2 = 200958400033528239ULL;
unsigned long long int var_3 = 10416165789740622812ULL;
unsigned long long int var_4 = 2205637839653754446ULL;
int var_5 = -804000010;
unsigned int var_6 = 3756826192U;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 1924093538U;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)50196;
signed char var_16 = (signed char)13;
int zero = 0;
int var_18 = -641447898;
unsigned short var_19 = (unsigned short)14696;
signed char var_20 = (signed char)21;
short var_21 = (short)-26427;
unsigned int var_22 = 2872295445U;
int var_23 = -1564063161;
signed char var_24 = (signed char)89;
_Bool var_25 = (_Bool)1;
long long int var_26 = 2985390518047622268LL;
_Bool var_27 = (_Bool)1;
long long int var_28 = -7860727906836455929LL;
unsigned long long int var_29 = 13348057609161170384ULL;
long long int var_30 = 6047908894412795723LL;
unsigned short var_31 = (unsigned short)1129;
short var_32 = (short)-13931;
short var_33 = (short)11445;
long long int arr_0 [21] [21] ;
signed char arr_4 [18] ;
unsigned int arr_7 [18] [18] ;
short arr_10 [18] [18] [18] ;
unsigned short arr_12 [18] ;
long long int arr_13 [18] ;
short arr_14 [18] [18] [18] [18] ;
long long int arr_17 [18] [18] [18] [18] ;
unsigned short arr_19 [18] [18] [18] [18] [18] [18] [18] ;
short arr_20 [18] [18] [18] [18] [18] [18] ;
unsigned long long int arr_22 [18] [18] [18] [18] [18] [18] ;
_Bool arr_15 [18] ;
unsigned long long int arr_16 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? -4850451103366594429LL : 1381627770115436120LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = 1807562740U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)23780;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (unsigned short)61207;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = -4179325293105180116LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (short)19432;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = -6095091333113204886LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)43815;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-15054;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 8505176745603299768ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 9674745595377771890ULL;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
