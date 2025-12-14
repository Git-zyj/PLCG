#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2490619068U;
long long int var_1 = 2396294416419148208LL;
unsigned char var_2 = (unsigned char)134;
unsigned long long int var_3 = 4937071258157150414ULL;
unsigned short var_4 = (unsigned short)36259;
short var_6 = (short)-22583;
long long int var_7 = -2451566885745840963LL;
short var_9 = (short)-26;
signed char var_10 = (signed char)-101;
long long int var_11 = -5047596388814146055LL;
signed char var_12 = (signed char)-46;
signed char var_14 = (signed char)-12;
unsigned short var_15 = (unsigned short)9421;
int zero = 0;
signed char var_16 = (signed char)0;
unsigned int var_17 = 481535628U;
unsigned char var_18 = (unsigned char)50;
unsigned char var_19 = (unsigned char)252;
long long int var_20 = -8979974505558203929LL;
unsigned int var_21 = 1766700453U;
unsigned int var_22 = 165632301U;
unsigned short var_23 = (unsigned short)61611;
unsigned long long int var_24 = 15438705995528890287ULL;
unsigned short var_25 = (unsigned short)56367;
int var_26 = -641665582;
unsigned long long int var_27 = 1034611893199582015ULL;
unsigned char var_28 = (unsigned char)82;
unsigned char var_29 = (unsigned char)149;
long long int var_30 = 5375269026567696909LL;
short arr_4 [20] ;
long long int arr_7 [20] [20] ;
long long int arr_18 [20] [20] ;
short arr_26 [20] [20] ;
unsigned long long int arr_29 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (short)10637;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = -212611638762737370LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? -6084517716917005909LL : 2686396090265626574LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_26 [i_0] [i_1] = (short)10355;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_29 [i_0] [i_1] = 16152702090775216944ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
