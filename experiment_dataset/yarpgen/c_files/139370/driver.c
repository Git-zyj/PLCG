#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 11448847138350587363ULL;
unsigned int var_5 = 206992542U;
unsigned int var_7 = 1408323009U;
int var_8 = 1613452635;
unsigned int var_9 = 2285273942U;
int var_10 = 101130572;
long long int var_12 = -886047680026747352LL;
int var_14 = -1878537454;
long long int var_15 = -1519114009681756143LL;
int zero = 0;
long long int var_16 = 2598878684117672166LL;
unsigned short var_17 = (unsigned short)62796;
long long int var_18 = 1266334052791293917LL;
unsigned short var_19 = (unsigned short)42304;
unsigned int var_20 = 1434431130U;
long long int var_21 = -5815852434218453940LL;
short var_22 = (short)27439;
long long int var_23 = 5524687640188514594LL;
unsigned long long int var_24 = 10600427145862307573ULL;
int var_25 = 522173962;
unsigned short arr_0 [24] ;
int arr_2 [24] ;
unsigned int arr_3 [24] [24] [24] ;
unsigned short arr_4 [24] ;
long long int arr_7 [24] ;
unsigned long long int arr_9 [24] [24] ;
long long int arr_10 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)45525;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 450054706;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3083164792U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned short)48834;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = -4540648682387201518LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = 394373755194849924ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = -3903823215576312043LL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
