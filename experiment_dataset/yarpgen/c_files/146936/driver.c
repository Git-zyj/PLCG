#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)130;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 1244823267U;
signed char var_3 = (signed char)47;
long long int var_4 = -6238074101528425495LL;
unsigned short var_5 = (unsigned short)80;
unsigned char var_6 = (unsigned char)68;
unsigned long long int var_7 = 13565042670406604464ULL;
unsigned long long int var_8 = 11729372739086699115ULL;
unsigned int var_10 = 4090201749U;
int zero = 0;
unsigned long long int var_11 = 16952671069021254641ULL;
unsigned long long int var_12 = 8743953311307423200ULL;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-60;
long long int var_15 = 5476246740403398272LL;
short var_16 = (short)-18930;
signed char var_17 = (signed char)107;
unsigned int var_18 = 3669258872U;
signed char var_19 = (signed char)124;
signed char var_20 = (signed char)43;
unsigned long long int var_21 = 3403229422266012508ULL;
unsigned short var_22 = (unsigned short)35519;
short var_23 = (short)-30506;
int var_24 = -982585543;
short var_25 = (short)-22032;
long long int arr_3 [18] [18] ;
short arr_4 [18] ;
unsigned long long int arr_6 [18] ;
unsigned char arr_10 [18] [18] [18] ;
unsigned short arr_15 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = -1627432336586308004LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (short)11477;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 4585230502852442225ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned short)46134;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
