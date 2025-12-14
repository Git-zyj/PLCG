#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6440490130086373378LL;
unsigned int var_2 = 2671740094U;
unsigned char var_3 = (unsigned char)144;
unsigned long long int var_5 = 18336135679784488997ULL;
int zero = 0;
short var_11 = (short)-24773;
unsigned int var_12 = 3022719975U;
unsigned int var_13 = 3120505641U;
signed char var_14 = (signed char)-104;
unsigned char var_15 = (unsigned char)149;
int var_16 = -891752040;
int var_17 = 457287223;
unsigned long long int var_18 = 8695382766044320971ULL;
unsigned long long int var_19 = 2754092909487301681ULL;
unsigned int var_20 = 1944568678U;
unsigned char arr_0 [20] ;
unsigned short arr_2 [20] [20] ;
unsigned int arr_4 [20] [20] ;
short arr_6 [19] ;
unsigned short arr_7 [19] [19] ;
signed char arr_8 [24] ;
signed char arr_9 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)29754;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 1346991347U : 1693969153U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (short)8090;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)1161;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (signed char)-90;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
