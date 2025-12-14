#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9147956132718242386ULL;
signed char var_1 = (signed char)113;
unsigned short var_2 = (unsigned short)64833;
unsigned char var_3 = (unsigned char)40;
long long int var_5 = -1970994047829908375LL;
unsigned short var_6 = (unsigned short)18072;
signed char var_7 = (signed char)51;
signed char var_8 = (signed char)68;
unsigned long long int var_9 = 8628398714217549844ULL;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)127;
unsigned int var_12 = 3334909749U;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-55;
unsigned char var_16 = (unsigned char)150;
unsigned short var_17 = (unsigned short)42970;
int var_18 = -1142934096;
unsigned short var_19 = (unsigned short)668;
unsigned int arr_3 [25] [25] ;
unsigned char arr_4 [25] [25] [25] ;
unsigned int arr_6 [25] [25] [25] ;
_Bool arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 2936056692U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1481122428U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
