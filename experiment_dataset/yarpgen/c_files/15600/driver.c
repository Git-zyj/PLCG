#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41805;
short var_2 = (short)-22572;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)25657;
unsigned short var_5 = (unsigned short)56392;
int var_6 = 1428860412;
signed char var_9 = (signed char)117;
short var_10 = (short)17069;
unsigned short var_11 = (unsigned short)32228;
short var_16 = (short)3258;
_Bool var_17 = (_Bool)0;
int var_18 = 897434395;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 421917974390608495ULL;
unsigned long long int var_21 = 5134369389748875550ULL;
long long int var_22 = -663837316203497071LL;
int var_23 = -1964330872;
short var_24 = (short)8632;
unsigned long long int var_25 = 7197932301771015202ULL;
long long int var_26 = 1864354769172873336LL;
short var_27 = (short)19251;
short var_28 = (short)22851;
signed char var_29 = (signed char)82;
int var_30 = 357490404;
unsigned char var_31 = (unsigned char)96;
unsigned short var_32 = (unsigned short)8348;
signed char arr_0 [19] [19] ;
short arr_1 [19] ;
_Bool arr_2 [19] [19] [19] ;
short arr_3 [19] [19] [19] ;
short arr_4 [19] [19] ;
long long int arr_7 [19] [19] [19] ;
long long int arr_11 [19] [19] ;
unsigned long long int arr_12 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-63;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)21481;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)15771;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (short)13543;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 8302590821983219631LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_11 [i_0] [i_1] = -7619417453599533481LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 9550705176400615096ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
