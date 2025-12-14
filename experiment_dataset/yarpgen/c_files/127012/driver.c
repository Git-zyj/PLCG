#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44779;
unsigned int var_3 = 2464710546U;
unsigned int var_5 = 1261080216U;
short var_8 = (short)29603;
signed char var_10 = (signed char)-1;
long long int var_12 = 1450914300006099359LL;
signed char var_13 = (signed char)-126;
signed char var_14 = (signed char)67;
unsigned int var_15 = 3728524087U;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 17724254949040462438ULL;
unsigned short var_19 = (unsigned short)36752;
unsigned long long int var_20 = 6354501723415547970ULL;
unsigned char var_21 = (unsigned char)185;
int var_22 = -1809757355;
unsigned int var_23 = 740257704U;
unsigned int var_24 = 2724398892U;
unsigned char var_25 = (unsigned char)199;
unsigned char var_26 = (unsigned char)103;
int var_27 = 754804007;
unsigned char var_28 = (unsigned char)212;
unsigned int arr_3 [23] [23] [23] ;
int arr_4 [23] [23] [23] ;
unsigned int arr_7 [23] [23] ;
unsigned short arr_5 [23] [23] [23] ;
_Bool arr_17 [23] ;
signed char arr_20 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2124871416U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1565797384;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 294424679U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)39248;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_20 [i_0] = (signed char)-61;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
