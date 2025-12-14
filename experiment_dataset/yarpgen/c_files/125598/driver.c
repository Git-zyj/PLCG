#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)71;
unsigned int var_2 = 3529242428U;
short var_3 = (short)19091;
signed char var_4 = (signed char)41;
signed char var_5 = (signed char)68;
long long int var_6 = -4146275906399940912LL;
long long int var_9 = -3386330719017468838LL;
unsigned int var_17 = 1680397872U;
int zero = 0;
unsigned short var_20 = (unsigned short)58249;
unsigned long long int var_21 = 12609131255718923070ULL;
short var_22 = (short)-15977;
signed char var_23 = (signed char)-26;
int var_24 = 1273290228;
long long int var_25 = 3143423083535161802LL;
long long int var_26 = -3281642530956152569LL;
unsigned long long int var_27 = 17717368094098729398ULL;
int var_28 = -1620162150;
long long int var_29 = -4783930895260675400LL;
short var_30 = (short)22787;
unsigned char var_31 = (unsigned char)80;
unsigned short var_32 = (unsigned short)19197;
long long int arr_0 [25] ;
unsigned short arr_1 [25] [25] ;
long long int arr_4 [23] [23] ;
_Bool arr_5 [23] ;
_Bool arr_6 [23] [23] ;
long long int arr_13 [23] [23] [23] ;
short arr_14 [23] [23] [23] ;
unsigned char arr_15 [23] ;
unsigned short arr_19 [12] ;
_Bool arr_2 [25] ;
unsigned char arr_3 [25] ;
unsigned int arr_7 [23] ;
int arr_11 [23] ;
long long int arr_21 [12] ;
unsigned short arr_22 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -6191293744159845882LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)64749;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 6921475182054421929LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -6805067223842845691LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (short)-31056;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = (unsigned short)49068;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 265119133U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = 1439277;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_21 [i_0] = -5793971053287084681LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_22 [i_0] = (unsigned short)43407;
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
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
