#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20249;
long long int var_1 = 8312745873418032337LL;
short var_2 = (short)5913;
unsigned short var_5 = (unsigned short)45581;
long long int var_6 = -2744981842908349067LL;
unsigned char var_8 = (unsigned char)172;
unsigned short var_9 = (unsigned short)24956;
short var_10 = (short)-8854;
short var_11 = (short)6545;
int zero = 0;
short var_12 = (short)14592;
signed char var_13 = (signed char)76;
signed char var_14 = (signed char)67;
long long int var_15 = -6305584168551057773LL;
short var_16 = (short)12621;
unsigned int arr_2 [13] [13] ;
signed char arr_8 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 3968899384U : 2846281436U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-64 : (signed char)41;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
