#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1090148739394601687ULL;
unsigned short var_1 = (unsigned short)20935;
unsigned short var_4 = (unsigned short)52952;
unsigned long long int var_5 = 5457534930091237279ULL;
long long int var_7 = -3990338375987506231LL;
unsigned short var_8 = (unsigned short)41316;
unsigned short var_11 = (unsigned short)32405;
int zero = 0;
signed char var_12 = (signed char)32;
unsigned short var_13 = (unsigned short)53290;
unsigned short var_14 = (unsigned short)8668;
unsigned short var_15 = (unsigned short)46915;
long long int var_16 = -2962268733161053964LL;
unsigned long long int var_17 = 6952103626380821918ULL;
unsigned short var_18 = (unsigned short)65114;
unsigned short var_19 = (unsigned short)26341;
unsigned short var_20 = (unsigned short)53257;
signed char var_21 = (signed char)-29;
signed char var_22 = (signed char)-12;
unsigned long long int var_23 = 4355195346532179085ULL;
long long int var_24 = 1768259563075908512LL;
unsigned short var_25 = (unsigned short)25279;
unsigned short var_26 = (unsigned short)33500;
unsigned short arr_0 [11] [11] ;
unsigned long long int arr_2 [11] ;
unsigned long long int arr_4 [13] [13] ;
unsigned short arr_9 [13] [13] [13] [13] ;
unsigned short arr_12 [23] ;
unsigned long long int arr_13 [23] [23] ;
short arr_14 [23] ;
unsigned short arr_15 [23] [23] ;
unsigned long long int arr_17 [23] [23] [23] ;
unsigned short arr_18 [23] [23] [23] [23] ;
unsigned long long int arr_19 [23] [23] [23] [23] ;
long long int arr_3 [11] ;
unsigned long long int arr_20 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)20972;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 12011050251696228628ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 4527304140388969351ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned short)37572;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (unsigned short)50593;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = 13133571109654572559ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)-27230 : (short)-31252;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)58175;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 110415285806014452ULL : 15440245832212966781ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)65493 : (unsigned short)40722;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 10259966982868704866ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 6458759518412420048LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? 8854580164392604063ULL : 8041753428632358557ULL;
}

void checksum() {
    hash(&seed, var_12);
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
