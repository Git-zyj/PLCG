#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6331;
long long int var_2 = -6570401554846589249LL;
long long int var_4 = -6665326358623157683LL;
unsigned char var_5 = (unsigned char)11;
int var_6 = -1815603310;
int var_7 = 1722382327;
unsigned int var_8 = 2315770909U;
unsigned char var_9 = (unsigned char)15;
unsigned short var_10 = (unsigned short)24599;
long long int var_11 = 1365819588514714656LL;
signed char var_13 = (signed char)121;
int zero = 0;
unsigned short var_14 = (unsigned short)11435;
signed char var_15 = (signed char)-55;
int var_16 = -116371430;
unsigned short var_17 = (unsigned short)59652;
long long int var_18 = -3985650829414311188LL;
int var_19 = 1628927427;
long long int var_20 = 6399204377646610675LL;
unsigned int var_21 = 1939034499U;
_Bool arr_5 [21] [21] ;
unsigned short arr_7 [21] [21] ;
long long int arr_13 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)22111 : (unsigned short)49606;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 8043090939503749127LL : -1343014528724118632LL;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
