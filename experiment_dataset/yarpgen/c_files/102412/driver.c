#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6332861854144175591LL;
unsigned short var_2 = (unsigned short)38795;
long long int var_3 = 2583617779543673858LL;
long long int var_6 = 4172427970995528293LL;
long long int var_10 = 7508813908860710875LL;
unsigned char var_12 = (unsigned char)14;
long long int var_14 = -4636029543450098816LL;
int zero = 0;
long long int var_15 = -1921108000906514246LL;
unsigned short var_16 = (unsigned short)44625;
unsigned long long int var_17 = 14285189563503982677ULL;
short var_18 = (short)-26613;
long long int var_19 = 3943372854915547229LL;
unsigned short var_20 = (unsigned short)17467;
long long int var_21 = 650999262621650495LL;
unsigned short var_22 = (unsigned short)60205;
short var_23 = (short)21270;
short var_24 = (short)10432;
long long int var_25 = -4548598041810361165LL;
unsigned int var_26 = 1116183993U;
unsigned short var_27 = (unsigned short)60127;
unsigned char var_28 = (unsigned char)159;
unsigned int var_29 = 3466353904U;
unsigned int var_30 = 1711385419U;
long long int arr_0 [19] [19] ;
unsigned char arr_1 [19] [19] ;
long long int arr_4 [23] [23] ;
unsigned short arr_5 [23] ;
unsigned short arr_8 [18] [18] ;
unsigned int arr_9 [18] [18] ;
long long int arr_2 [19] [19] ;
long long int arr_3 [19] ;
long long int arr_6 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = -8545693850354269367LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 7856311741675432386LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned short)33317;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)39398;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = 2629526619U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 5963460413277368899LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -276689736885214190LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 4453651098975699012LL;
}

void checksum() {
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
