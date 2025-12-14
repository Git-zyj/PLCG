#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8732;
signed char var_3 = (signed char)114;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)21714;
int var_7 = -957890655;
unsigned short var_8 = (unsigned short)3835;
unsigned short var_9 = (unsigned short)56327;
int var_10 = 1891720453;
short var_11 = (short)-9230;
int zero = 0;
signed char var_13 = (signed char)121;
short var_14 = (short)-30870;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-29338;
long long int var_18 = 6375589990679670481LL;
signed char arr_0 [17] ;
unsigned short arr_1 [17] [17] ;
unsigned int arr_2 [17] [17] ;
signed char arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-111 : (signed char)106;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)28470 : (unsigned short)26564;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 3666121274U : 1493958403U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
