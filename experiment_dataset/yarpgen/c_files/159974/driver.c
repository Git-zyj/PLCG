#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4605615194585261781ULL;
unsigned long long int var_2 = 9732551435626338744ULL;
signed char var_3 = (signed char)89;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-55;
signed char var_7 = (signed char)-76;
_Bool var_8 = (_Bool)1;
long long int var_9 = -5462305038780865948LL;
long long int var_10 = -9208281257036053762LL;
short var_12 = (short)-23909;
unsigned char var_13 = (unsigned char)28;
unsigned int var_14 = 4260295581U;
unsigned long long int var_15 = 6667488198483038438ULL;
int zero = 0;
unsigned long long int var_16 = 11984067344324866368ULL;
unsigned long long int var_17 = 13561658990990146809ULL;
long long int var_18 = -8407798107062668238LL;
short var_19 = (short)-6636;
short var_20 = (short)-4009;
short var_21 = (short)-6636;
unsigned long long int arr_4 [21] ;
unsigned short arr_5 [21] ;
signed char arr_3 [11] [11] ;
unsigned char arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 11125376981184817611ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned short)27335;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned char)21;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
