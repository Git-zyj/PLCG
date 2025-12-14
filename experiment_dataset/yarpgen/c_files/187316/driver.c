#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16892268406361356545ULL;
unsigned short var_5 = (unsigned short)46519;
unsigned short var_7 = (unsigned short)23171;
unsigned short var_9 = (unsigned short)62465;
signed char var_11 = (signed char)-17;
signed char var_12 = (signed char)50;
signed char var_15 = (signed char)-30;
unsigned short var_16 = (unsigned short)34694;
unsigned long long int var_17 = 1417072436339626756ULL;
int zero = 0;
signed char var_18 = (signed char)65;
signed char var_19 = (signed char)-20;
unsigned long long int var_20 = 7054772356678481225ULL;
unsigned long long int var_21 = 725816115118126193ULL;
unsigned short var_22 = (unsigned short)21081;
unsigned long long int var_23 = 16505973539126007508ULL;
signed char arr_0 [17] ;
signed char arr_1 [17] ;
unsigned long long int arr_2 [17] ;
unsigned long long int arr_3 [17] [17] ;
unsigned short arr_4 [17] [17] [17] ;
unsigned long long int arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)21;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 14373348493386760298ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 5004382196011254112ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)120;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 13666483676508537812ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
