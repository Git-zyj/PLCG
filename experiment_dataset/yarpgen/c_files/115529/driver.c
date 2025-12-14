#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)174;
unsigned char var_1 = (unsigned char)106;
long long int var_2 = 6449926487355542540LL;
unsigned char var_3 = (unsigned char)67;
long long int var_4 = -330647259917860408LL;
long long int var_5 = 8218785649725206402LL;
unsigned char var_6 = (unsigned char)20;
long long int var_7 = 460796392420711999LL;
long long int var_8 = -4404634096544202676LL;
unsigned short var_9 = (unsigned short)46407;
long long int var_10 = 6337302057918350104LL;
signed char var_11 = (signed char)69;
signed char var_12 = (signed char)-27;
int zero = 0;
unsigned short var_13 = (unsigned short)5963;
signed char var_14 = (signed char)(-127 - 1);
long long int var_15 = 5876341358668910966LL;
unsigned char var_16 = (unsigned char)219;
long long int var_17 = -5185630653147924128LL;
signed char var_18 = (signed char)57;
unsigned short var_19 = (unsigned short)60641;
unsigned char var_20 = (unsigned char)83;
long long int var_21 = 7615362863687660956LL;
unsigned char var_22 = (unsigned char)184;
long long int var_23 = 3516623641572881992LL;
unsigned short arr_2 [14] [14] ;
unsigned char arr_3 [14] [14] ;
long long int arr_7 [14] [14] [14] ;
unsigned short arr_9 [14] [14] [14] ;
unsigned char arr_16 [19] ;
unsigned char arr_17 [19] ;
signed char arr_21 [16] ;
long long int arr_23 [16] [16] ;
unsigned char arr_10 [14] [14] ;
unsigned short arr_13 [14] [14] ;
unsigned short arr_14 [14] [14] [14] ;
long long int arr_15 [14] ;
unsigned char arr_18 [19] ;
unsigned short arr_19 [19] ;
long long int arr_24 [16] ;
long long int arr_25 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)879 : (unsigned short)45378;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)39 : (unsigned char)127;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -2834172458453208793LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)56419;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_23 [i_0] [i_1] = -5786985997362679714LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)172 : (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)23266;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned short)48459;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = 424016006372110254LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_19 [i_0] = (unsigned short)31492;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_24 [i_0] = -8216592997091142702LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_25 [i_0] [i_1] = -2537050808260768808LL;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
