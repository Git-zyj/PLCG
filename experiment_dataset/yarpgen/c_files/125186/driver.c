#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2621;
unsigned char var_2 = (unsigned char)110;
short var_6 = (short)13944;
unsigned short var_7 = (unsigned short)39188;
unsigned short var_8 = (unsigned short)50755;
unsigned int var_9 = 2456034277U;
int var_14 = 1075217314;
int zero = 0;
unsigned short var_18 = (unsigned short)40317;
unsigned char var_19 = (unsigned char)30;
int var_20 = -1933894165;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 1982829750U;
signed char var_23 = (signed char)-114;
int var_24 = -1697700256;
signed char var_25 = (signed char)-4;
unsigned long long int var_26 = 3294124212831705904ULL;
signed char arr_0 [24] ;
unsigned long long int arr_1 [24] ;
unsigned char arr_3 [23] [23] ;
unsigned char arr_4 [23] [23] ;
unsigned int arr_5 [23] ;
unsigned int arr_6 [23] [23] ;
unsigned short arr_8 [23] [23] ;
unsigned short arr_10 [23] [23] ;
unsigned long long int arr_17 [23] ;
long long int arr_2 [24] ;
long long int arr_9 [23] ;
int arr_12 [23] [23] [23] ;
unsigned int arr_13 [23] ;
unsigned long long int arr_16 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)117;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 2469840877936837040ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)80;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 155238950U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 2832458379U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)12415;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)17415;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = 12647260311475762520ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 8227658113819470015LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 859358838269077111LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -1799993030;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = 3860648547U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = 13208104928498953760ULL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
