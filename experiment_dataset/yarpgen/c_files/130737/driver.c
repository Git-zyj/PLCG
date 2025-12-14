#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18958;
unsigned long long int var_2 = 1967581112288901558ULL;
unsigned char var_3 = (unsigned char)236;
int var_5 = -1463220728;
long long int var_11 = -430490498421569588LL;
unsigned long long int var_12 = 15130029920945542528ULL;
unsigned char var_13 = (unsigned char)8;
unsigned short var_15 = (unsigned short)52843;
unsigned int var_19 = 709288524U;
int zero = 0;
unsigned long long int var_20 = 5338791484976729859ULL;
int var_21 = -1684681315;
long long int var_22 = -9156454420566845432LL;
long long int var_23 = -5246829310195602511LL;
unsigned short var_24 = (unsigned short)55592;
signed char var_25 = (signed char)-69;
_Bool var_26 = (_Bool)1;
unsigned char var_27 = (unsigned char)41;
short arr_0 [20] ;
long long int arr_3 [20] [20] [20] ;
signed char arr_5 [10] ;
int arr_6 [10] ;
unsigned long long int arr_11 [10] [10] [10] ;
unsigned char arr_12 [10] [10] [10] [10] ;
unsigned char arr_4 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)31469;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 6396776168816275331LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = -202312559;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 9259606685925570501ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)121;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
