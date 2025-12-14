#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1583213206;
int var_2 = 1065720335;
short var_3 = (short)-2619;
int var_4 = -629767039;
int var_6 = -1781792193;
_Bool var_7 = (_Bool)1;
long long int var_8 = -5032814538897853087LL;
unsigned int var_9 = 2406778813U;
long long int var_11 = -5924978171639992062LL;
int zero = 0;
int var_12 = -524608073;
long long int var_13 = 7682433177777898746LL;
unsigned short var_14 = (unsigned short)6938;
short var_15 = (short)28406;
_Bool var_16 = (_Bool)0;
long long int var_17 = 3967590484426041794LL;
int var_18 = 938015585;
unsigned short arr_11 [10] ;
long long int arr_14 [20] ;
long long int arr_15 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (unsigned short)42894;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = -7511872315508481010LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = -3403765235174489883LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
