#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11705306598481287071ULL;
unsigned int var_2 = 1598007753U;
long long int var_4 = 5998113749966224781LL;
long long int var_5 = -7670615298072510796LL;
unsigned int var_6 = 2417936404U;
signed char var_7 = (signed char)-50;
unsigned long long int var_8 = 15414784802356953516ULL;
long long int var_10 = 2508960480885710622LL;
short var_11 = (short)23123;
short var_12 = (short)13483;
int zero = 0;
short var_14 = (short)32384;
short var_15 = (short)6419;
unsigned char var_16 = (unsigned char)173;
unsigned int var_17 = 181651117U;
short var_18 = (short)12042;
unsigned long long int var_19 = 15518581790228909882ULL;
int var_20 = -1956820976;
unsigned int var_21 = 1099142228U;
short var_22 = (short)17166;
unsigned char var_23 = (unsigned char)174;
signed char var_24 = (signed char)-94;
unsigned short var_25 = (unsigned short)1431;
unsigned int var_26 = 1518161233U;
short var_27 = (short)-957;
unsigned short arr_1 [20] ;
int arr_4 [20] ;
short arr_6 [20] ;
int arr_9 [20] [20] [20] [20] ;
int arr_12 [21] ;
int arr_13 [21] ;
int arr_10 [20] [20] [20] [20] ;
long long int arr_14 [21] [21] ;
int arr_18 [13] ;
int arr_23 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)12231;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 1044927399;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (short)-20423;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -8879142;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = -1072696841;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = -1704098745;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -236649735 : -1984891570;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = -4265528316823258692LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = 260590168;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_23 [i_0] = -606400707;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
