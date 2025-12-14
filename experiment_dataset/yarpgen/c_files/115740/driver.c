#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14899664184884230973ULL;
unsigned long long int var_2 = 2643813636878289595ULL;
unsigned long long int var_3 = 7101836413454320715ULL;
signed char var_4 = (signed char)-120;
signed char var_5 = (signed char)29;
signed char var_6 = (signed char)-30;
unsigned short var_7 = (unsigned short)3717;
unsigned long long int var_12 = 18181350139632908287ULL;
unsigned short var_13 = (unsigned short)46753;
unsigned short var_15 = (unsigned short)44843;
int zero = 0;
unsigned short var_16 = (unsigned short)38370;
signed char var_17 = (signed char)-43;
signed char var_18 = (signed char)81;
signed char var_19 = (signed char)-81;
unsigned short var_20 = (unsigned short)7677;
unsigned long long int var_21 = 18361255705632254245ULL;
unsigned short var_22 = (unsigned short)37877;
unsigned long long int var_23 = 16714753631225131123ULL;
signed char var_24 = (signed char)80;
unsigned short var_25 = (unsigned short)63653;
unsigned long long int var_26 = 12248003201404031986ULL;
unsigned long long int var_27 = 9337259704009745206ULL;
unsigned long long int var_28 = 6942127800061817606ULL;
unsigned short var_29 = (unsigned short)36207;
unsigned short arr_0 [24] [24] ;
unsigned short arr_1 [24] ;
unsigned long long int arr_2 [11] ;
unsigned long long int arr_3 [11] ;
unsigned long long int arr_4 [16] [16] ;
unsigned long long int arr_5 [16] [16] ;
unsigned long long int arr_8 [16] ;
unsigned long long int arr_11 [16] ;
signed char arr_12 [16] ;
unsigned long long int arr_13 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)5315;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)9798;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 2854185346122846772ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 10908560119648766055ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 1797230567413399835ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 16155499549896253901ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 16015339328754763328ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = 14365644117618774781ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (signed char)-111;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 11753343085592298038ULL : 13043176488157876535ULL;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
