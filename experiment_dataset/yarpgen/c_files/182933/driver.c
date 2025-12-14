#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39000;
unsigned short var_5 = (unsigned short)64159;
int var_8 = 1914931834;
unsigned short var_9 = (unsigned short)45549;
int var_10 = 1153838969;
unsigned short var_12 = (unsigned short)24643;
signed char var_13 = (signed char)-10;
int zero = 0;
int var_16 = -40401522;
short var_17 = (short)29742;
long long int var_18 = 4742988180880499750LL;
signed char var_19 = (signed char)-5;
_Bool var_20 = (_Bool)0;
short var_21 = (short)5124;
unsigned long long int var_22 = 9423498667053051930ULL;
unsigned short var_23 = (unsigned short)13860;
unsigned long long int var_24 = 17651920416286797697ULL;
signed char var_25 = (signed char)-98;
long long int arr_0 [11] [11] ;
unsigned long long int arr_1 [11] ;
long long int arr_3 [23] ;
long long int arr_5 [23] [23] [23] ;
unsigned char arr_6 [23] [23] ;
unsigned int arr_7 [23] [23] ;
unsigned short arr_10 [17] [17] ;
unsigned int arr_2 [11] [11] ;
unsigned short arr_9 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = -540184565365624701LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 13335032683566900239ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = -3318252039036686526LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -3764480907178329254LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 3646936356U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)56535;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 2421994121U : 1487762582U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (unsigned short)64751;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
