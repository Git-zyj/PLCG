#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3132999802U;
long long int var_1 = -6677525076054749151LL;
unsigned int var_2 = 2980327456U;
unsigned char var_3 = (unsigned char)10;
signed char var_4 = (signed char)66;
unsigned char var_6 = (unsigned char)201;
unsigned char var_7 = (unsigned char)92;
unsigned char var_9 = (unsigned char)228;
long long int var_10 = 2515031785293663641LL;
long long int var_12 = -7625040558578446563LL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 3782712997155525434ULL;
unsigned char var_15 = (unsigned char)230;
_Bool var_16 = (_Bool)0;
long long int var_17 = -3059313794899153861LL;
unsigned short var_18 = (unsigned short)14158;
int zero = 0;
signed char var_19 = (signed char)56;
int var_20 = -1115840590;
unsigned long long int var_21 = 14681800787076976276ULL;
int var_22 = -1586868838;
int var_23 = 739596229;
unsigned int var_24 = 3601402621U;
unsigned long long int var_25 = 5627469708417500635ULL;
_Bool var_26 = (_Bool)1;
signed char var_27 = (signed char)5;
long long int var_28 = -7281947069506101498LL;
long long int var_29 = -6771845350418116326LL;
int var_30 = 1225570580;
short var_31 = (short)-12848;
signed char var_32 = (signed char)-88;
long long int var_33 = 997229503526847733LL;
signed char var_34 = (signed char)122;
short arr_0 [10] ;
long long int arr_1 [10] [10] ;
unsigned long long int arr_2 [10] ;
_Bool arr_3 [10] [10] ;
int arr_5 [10] [10] ;
long long int arr_6 [10] ;
unsigned long long int arr_7 [10] [10] ;
int arr_9 [10] ;
unsigned char arr_10 [10] [10] [10] ;
unsigned long long int arr_11 [10] ;
unsigned short arr_14 [10] [10] ;
unsigned short arr_15 [10] ;
unsigned short arr_19 [10] ;
unsigned int arr_23 [10] [10] [10] ;
unsigned short arr_31 [23] ;
unsigned char arr_32 [23] ;
_Bool arr_4 [10] [10] ;
_Bool arr_8 [10] [10] ;
int arr_12 [10] [10] [10] ;
int arr_13 [10] [10] [10] ;
signed char arr_16 [10] [10] ;
unsigned long long int arr_21 [10] ;
long long int arr_28 [10] ;
unsigned long long int arr_29 [10] ;
_Bool arr_33 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)-18273;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = -645327873916068439LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 2785424042091382703ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = -634431470;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -6631707032727102764LL : 8005385796529625516LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 15526368524809544167ULL : 14775470073431458290ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = 1969608138;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = 9654967796488763655ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)16961 : (unsigned short)14358;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = (unsigned short)44861;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = (unsigned short)16162;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 1471391919U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_31 [i_0] = (unsigned short)8748;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_32 [i_0] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 148599007 : -1960836328;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1501633896 : 1176991192;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-35 : (signed char)-43;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 12129095324595609833ULL : 8685926136482796849ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 6293960647254084008LL : -3348830436075562169LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? 12694033650056504183ULL : 5630682978082221642ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_33 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
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
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
