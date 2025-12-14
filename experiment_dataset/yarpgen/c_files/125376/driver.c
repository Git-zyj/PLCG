#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27629;
short var_1 = (short)-11163;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2999269814U;
unsigned char var_4 = (unsigned char)91;
unsigned long long int var_6 = 2106092594116332641ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)168;
short var_11 = (short)4796;
int var_12 = 55516206;
unsigned char var_13 = (unsigned char)166;
int var_14 = 1007189156;
unsigned char var_15 = (unsigned char)179;
int var_16 = -1617817331;
int var_17 = -1215902516;
int var_18 = -2104830193;
unsigned long long int var_19 = 14304338857743572864ULL;
unsigned short arr_0 [13] ;
_Bool arr_1 [13] [13] ;
int arr_2 [13] ;
unsigned char arr_3 [13] [13] [13] ;
int arr_7 [15] [15] ;
unsigned long long int arr_8 [15] ;
short arr_11 [10] ;
unsigned int arr_13 [10] ;
unsigned short arr_14 [10] ;
unsigned int arr_21 [16] [16] ;
short arr_22 [16] ;
unsigned int arr_28 [12] [12] [12] ;
unsigned short arr_6 [13] [13] ;
unsigned long long int arr_9 [15] [15] ;
short arr_12 [10] ;
long long int arr_15 [10] ;
unsigned short arr_19 [10] [10] ;
int arr_20 [10] [10] ;
unsigned long long int arr_23 [16] [16] ;
unsigned int arr_24 [16] ;
int arr_30 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)8183 : (unsigned short)60297;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 1364869139;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = -1159248968;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 9770554457488123028ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (short)-18934;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = 1012028626U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (unsigned short)33222;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_21 [i_0] [i_1] = 2344380502U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = (short)22467;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = 1870575673U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)30631 : (unsigned short)55474;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = 4683631311605689628ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (short)-6915;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = 3339853955974050890LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned short)719;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_20 [i_0] [i_1] = -853767616;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_23 [i_0] [i_1] = (i_0 % 2 == 0) ? 7770681042968213250ULL : 5667729530853597677ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? 4091383959U : 3090557214U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_30 [i_0] [i_1] = -1638660631;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
