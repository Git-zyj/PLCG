#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29054;
long long int var_3 = 6634623608405077801LL;
int var_4 = -920092306;
unsigned long long int var_5 = 8444514806576589677ULL;
unsigned long long int var_6 = 2754517073475304520ULL;
unsigned long long int var_8 = 11122754440739004697ULL;
long long int var_9 = -7268248861161964509LL;
unsigned long long int var_10 = 15486917137117906263ULL;
unsigned long long int var_11 = 17130220356230820602ULL;
short var_14 = (short)80;
int zero = 0;
unsigned long long int var_15 = 17573041387236841854ULL;
long long int var_16 = -5047838528284658721LL;
int var_17 = -1963550377;
int var_18 = -966088415;
int var_19 = -2012011088;
short var_20 = (short)27543;
long long int var_21 = 8781164609653521177LL;
short var_22 = (short)31012;
unsigned long long int var_23 = 15368289260628983250ULL;
short arr_0 [22] ;
short arr_1 [22] ;
long long int arr_2 [22] ;
long long int arr_3 [23] [23] ;
unsigned long long int arr_4 [23] ;
long long int arr_8 [23] [23] [23] [23] ;
short arr_9 [23] [23] [23] [23] ;
unsigned long long int arr_11 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)5153;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-21826;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 6115282193580911690LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 368736267018264483LL : 1453734721747923661LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 17151003747562402269ULL : 13059051154597464409ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 659549555938911582LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)-22225;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 4577394683091808830ULL : 13036748152103901718ULL;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
