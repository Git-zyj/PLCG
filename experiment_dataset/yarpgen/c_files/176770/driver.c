#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31236;
int var_1 = 620262986;
unsigned long long int var_2 = 11668120666956822597ULL;
unsigned char var_4 = (unsigned char)217;
unsigned long long int var_6 = 465197563936503282ULL;
long long int var_8 = 7125915707099132964LL;
unsigned short var_9 = (unsigned short)58310;
long long int var_10 = -2790070079968815264LL;
unsigned long long int var_11 = 4280331667748032799ULL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 7401449957497917319ULL;
unsigned long long int var_14 = 10834828678724301265ULL;
unsigned short var_15 = (unsigned short)25190;
short var_16 = (short)30332;
int zero = 0;
unsigned short var_17 = (unsigned short)18223;
_Bool var_18 = (_Bool)0;
int var_19 = -136528160;
long long int var_20 = 1293643505794404840LL;
short var_21 = (short)24697;
int var_22 = 1690131078;
unsigned char var_23 = (unsigned char)78;
int var_24 = 1040896785;
signed char var_25 = (signed char)-17;
unsigned short var_26 = (unsigned short)1563;
short var_27 = (short)-9067;
signed char var_28 = (signed char)-74;
unsigned int var_29 = 3061697124U;
unsigned short var_30 = (unsigned short)50021;
unsigned long long int var_31 = 12701001224918105094ULL;
signed char var_32 = (signed char)42;
unsigned int var_33 = 2795096315U;
unsigned char arr_0 [11] ;
unsigned short arr_2 [11] ;
int arr_3 [11] ;
unsigned short arr_4 [11] ;
short arr_5 [11] ;
unsigned char arr_6 [11] ;
int arr_7 [11] [11] ;
long long int arr_10 [11] ;
unsigned short arr_11 [11] ;
_Bool arr_16 [11] ;
signed char arr_8 [11] [11] [11] ;
short arr_9 [11] [11] [11] ;
unsigned long long int arr_12 [11] [11] [11] ;
long long int arr_18 [11] ;
unsigned long long int arr_23 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)45215;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -2080804087;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned short)54680;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (short)-7657;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = -346011513;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = -986498714484282263LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (unsigned short)49998;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_16 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)19996;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 6733962669514023791ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_18 [i_0] = 5827790679748352402LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 9661998625401059483ULL : 18341261050993665429ULL;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
