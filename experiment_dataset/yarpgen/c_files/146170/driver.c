#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3192;
unsigned long long int var_3 = 2104298964101908181ULL;
unsigned long long int var_4 = 15586278809276310720ULL;
unsigned long long int var_5 = 5332047293338440621ULL;
unsigned short var_6 = (unsigned short)32047;
unsigned long long int var_10 = 7001652804986995390ULL;
unsigned int var_14 = 1333896459U;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)217;
unsigned long long int var_18 = 150098324821016381ULL;
long long int var_19 = -4099137963845083047LL;
_Bool var_20 = (_Bool)1;
int var_21 = -1146262500;
long long int var_22 = 790180818836421755LL;
int var_23 = -1685753154;
unsigned char var_24 = (unsigned char)211;
signed char var_25 = (signed char)-77;
unsigned char arr_0 [11] ;
long long int arr_1 [11] [11] ;
unsigned long long int arr_2 [11] [11] ;
_Bool arr_4 [11] [11] [11] ;
unsigned int arr_8 [23] ;
unsigned long long int arr_9 [23] [23] ;
unsigned long long int arr_11 [23] [23] ;
unsigned int arr_7 [11] [11] [11] [11] ;
unsigned short arr_14 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 6580645068712249017LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 3712255471980426878ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = 1173049139U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = 10744476776209825191ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = 7547883100433096561ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 3800402103U : 1147767992U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (unsigned short)30072;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
