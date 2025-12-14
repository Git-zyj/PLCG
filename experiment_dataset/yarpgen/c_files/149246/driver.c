#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17775895782391710081ULL;
unsigned char var_1 = (unsigned char)116;
unsigned char var_2 = (unsigned char)224;
unsigned int var_5 = 1752218857U;
signed char var_6 = (signed char)-43;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-127;
unsigned char var_10 = (unsigned char)179;
_Bool var_12 = (_Bool)0;
long long int var_14 = 6395747197179167341LL;
int var_16 = -835629762;
unsigned int var_17 = 1957655103U;
_Bool var_18 = (_Bool)0;
int var_19 = -883102341;
int zero = 0;
unsigned short var_20 = (unsigned short)53255;
unsigned char var_21 = (unsigned char)17;
unsigned short var_22 = (unsigned short)64374;
unsigned char var_23 = (unsigned char)192;
unsigned int arr_2 [17] [17] [17] ;
signed char arr_4 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 3598762026U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-10;
}

void checksum() {
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
