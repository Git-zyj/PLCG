#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8391231108251606101LL;
unsigned char var_3 = (unsigned char)132;
short var_4 = (short)-27210;
unsigned int var_5 = 2992227666U;
short var_6 = (short)-5959;
unsigned int var_7 = 3079513166U;
short var_10 = (short)-20980;
unsigned int var_13 = 2385705321U;
short var_14 = (short)-3359;
int var_15 = 2004804911;
unsigned short var_16 = (unsigned short)4203;
unsigned int var_17 = 2758872553U;
signed char var_19 = (signed char)-26;
int zero = 0;
unsigned char var_20 = (unsigned char)16;
long long int var_21 = 4782955818858547501LL;
int var_22 = 382893292;
unsigned char var_23 = (unsigned char)238;
unsigned char arr_1 [15] ;
unsigned char arr_2 [15] ;
short arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)70;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-19755;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
