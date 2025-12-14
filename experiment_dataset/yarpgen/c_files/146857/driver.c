#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)154;
unsigned int var_2 = 1119329653U;
unsigned int var_3 = 4282450560U;
unsigned short var_4 = (unsigned short)47076;
short var_5 = (short)13201;
_Bool var_6 = (_Bool)0;
short var_7 = (short)5073;
int var_8 = 1778039752;
unsigned long long int var_11 = 11796856106569587307ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)36232;
signed char var_21 = (signed char)-12;
unsigned int var_22 = 1966320331U;
signed char var_23 = (signed char)112;
unsigned short var_24 = (unsigned short)52756;
long long int var_25 = 3478159774043756456LL;
unsigned short var_26 = (unsigned short)61161;
unsigned char var_27 = (unsigned char)27;
unsigned int var_28 = 84514121U;
int var_29 = -1215720588;
long long int var_30 = 207817794820196647LL;
unsigned long long int var_31 = 18169330858233917484ULL;
unsigned int arr_1 [11] [11] ;
long long int arr_2 [11] ;
unsigned int arr_4 [20] ;
unsigned int arr_6 [20] ;
long long int arr_7 [20] ;
unsigned char arr_11 [20] [20] ;
unsigned long long int arr_14 [20] [20] [20] [20] ;
_Bool arr_15 [20] [20] [20] [20] ;
unsigned char arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 3224092890U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -4918209610948857237LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 1454663252U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 1270654202U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = -166016689323035579LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 3626708817032769707ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned char)21;
}

void checksum() {
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
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
