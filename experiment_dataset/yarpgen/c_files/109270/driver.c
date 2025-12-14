#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)196;
unsigned int var_1 = 1034942063U;
unsigned long long int var_3 = 6099471498577989605ULL;
short var_6 = (short)-10507;
unsigned int var_8 = 1821649585U;
unsigned int var_10 = 2434734512U;
long long int var_11 = -4662383649333572412LL;
signed char var_12 = (signed char)-71;
int var_14 = -684370982;
int zero = 0;
unsigned char var_15 = (unsigned char)1;
unsigned long long int var_16 = 13136765851848384041ULL;
signed char var_17 = (signed char)114;
unsigned short var_18 = (unsigned short)13132;
unsigned char var_19 = (unsigned char)168;
unsigned long long int var_20 = 11773788090555223647ULL;
unsigned char var_21 = (unsigned char)6;
unsigned char var_22 = (unsigned char)54;
unsigned char arr_1 [13] [13] ;
signed char arr_2 [13] [13] ;
long long int arr_3 [13] [13] ;
unsigned char arr_6 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)61 : (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-12 : (signed char)120;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 7837565361906940951LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)114 : (unsigned char)35;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
