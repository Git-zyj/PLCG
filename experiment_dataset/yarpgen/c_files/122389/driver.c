#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)189;
unsigned int var_1 = 2038606314U;
unsigned char var_2 = (unsigned char)246;
short var_4 = (short)-18269;
unsigned long long int var_5 = 17857873119148753627ULL;
long long int var_8 = -3090738125966489584LL;
unsigned short var_10 = (unsigned short)57552;
int var_11 = 54724226;
unsigned char var_12 = (unsigned char)154;
unsigned short var_13 = (unsigned short)2163;
unsigned long long int var_15 = 5810852674452036864ULL;
short var_18 = (short)11092;
int zero = 0;
long long int var_19 = -4190428542779364803LL;
short var_20 = (short)1843;
unsigned long long int var_21 = 9015703280994844680ULL;
unsigned short var_22 = (unsigned short)37539;
int arr_0 [10] ;
int arr_1 [10] [10] ;
signed char arr_2 [10] [10] ;
int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -1346341443;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 741089224;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-110;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = -12660300;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
