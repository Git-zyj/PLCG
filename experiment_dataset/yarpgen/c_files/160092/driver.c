#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = -901930200964259416LL;
long long int var_3 = 7677545691487181774LL;
short var_4 = (short)-5349;
unsigned short var_5 = (unsigned short)33877;
unsigned long long int var_6 = 12322797249888586382ULL;
unsigned int var_7 = 763285506U;
short var_9 = (short)-10785;
signed char var_10 = (signed char)95;
signed char var_11 = (signed char)-58;
unsigned int var_12 = 4187362361U;
int zero = 0;
long long int var_13 = 8805323281279240800LL;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-31697;
unsigned char var_16 = (unsigned char)25;
unsigned long long int var_17 = 7118974748479885826ULL;
_Bool var_18 = (_Bool)1;
long long int var_19 = -6470504310339621633LL;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
int var_22 = -629048201;
signed char var_23 = (signed char)-21;
unsigned char arr_2 [15] [15] ;
unsigned char arr_4 [22] ;
unsigned char arr_5 [22] ;
short arr_7 [22] [22] [22] ;
unsigned long long int arr_8 [22] ;
unsigned long long int arr_9 [22] [22] ;
_Bool arr_3 [15] ;
unsigned short arr_10 [22] [22] ;
int arr_11 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)24995;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = 5885488935850806013ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = 13324956033329999998ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)1921;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = -1111170458;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
