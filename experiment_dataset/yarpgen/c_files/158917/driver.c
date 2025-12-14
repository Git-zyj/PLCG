#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4071141534355896057ULL;
short var_1 = (short)-8303;
unsigned long long int var_2 = 3163194009132835468ULL;
long long int var_3 = 6830533241718151411LL;
unsigned int var_5 = 4272027617U;
_Bool var_6 = (_Bool)1;
int var_7 = -2105026165;
unsigned int var_9 = 3146009085U;
int var_10 = 1114613298;
int var_11 = -97996677;
short var_12 = (short)-21856;
int var_13 = 505117304;
int zero = 0;
int var_14 = -966604895;
unsigned long long int var_15 = 6731505068046230641ULL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)6788;
int var_18 = 1026444844;
unsigned long long int var_19 = 18199180365475662297ULL;
unsigned short var_20 = (unsigned short)44921;
unsigned short var_21 = (unsigned short)4522;
_Bool arr_11 [10] ;
unsigned long long int arr_12 [10] ;
int arr_13 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = 12196413769210696586ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -1422881940;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
