#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)154;
unsigned long long int var_1 = 1586007667706121792ULL;
int var_3 = -951454660;
unsigned char var_5 = (unsigned char)205;
_Bool var_6 = (_Bool)0;
long long int var_8 = -5001588476040633614LL;
unsigned short var_11 = (unsigned short)42961;
unsigned short var_12 = (unsigned short)11028;
unsigned long long int var_13 = 17669307780341103190ULL;
signed char var_15 = (signed char)-37;
unsigned char var_16 = (unsigned char)101;
signed char var_17 = (signed char)121;
int zero = 0;
short var_18 = (short)-14125;
long long int var_19 = 873031598377549172LL;
signed char var_20 = (signed char)-88;
long long int var_21 = 9024705478128555115LL;
unsigned char var_22 = (unsigned char)12;
short var_23 = (short)-5088;
long long int var_24 = -5285430293781895063LL;
unsigned char var_25 = (unsigned char)59;
long long int var_26 = -1757347127395616691LL;
long long int var_27 = -6839656393943072483LL;
unsigned char var_28 = (unsigned char)77;
unsigned short var_29 = (unsigned short)16250;
unsigned long long int arr_0 [24] [24] ;
long long int arr_1 [24] ;
long long int arr_2 [24] [24] [24] ;
_Bool arr_3 [24] [24] [24] ;
int arr_9 [19] ;
unsigned char arr_10 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 12244265091346298613ULL : 10754302967646109708ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -7308108371985352276LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 4564213214391748998LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = 26556422;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)154;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
