#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7164031245295310820LL;
long long int var_5 = -4355297186789287106LL;
unsigned char var_11 = (unsigned char)91;
long long int var_13 = 6780135802166331136LL;
int zero = 0;
unsigned long long int var_15 = 486137377610630010ULL;
long long int var_16 = 921480781314184587LL;
unsigned char var_17 = (unsigned char)77;
unsigned long long int var_18 = 2112601816356803835ULL;
int var_19 = 573781664;
signed char var_20 = (signed char)86;
signed char var_21 = (signed char)-63;
unsigned char var_22 = (unsigned char)111;
unsigned long long int arr_0 [25] ;
int arr_1 [25] ;
int arr_7 [25] ;
signed char arr_8 [25] [25] ;
unsigned char arr_10 [25] [25] [25] ;
unsigned char arr_11 [25] [25] ;
int arr_12 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 3633005664570963643ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -1643469298;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = -1082169710;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = 423696258;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
