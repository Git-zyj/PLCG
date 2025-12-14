#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3304277295U;
signed char var_1 = (signed char)49;
long long int var_3 = 4786836853398175161LL;
signed char var_4 = (signed char)-99;
long long int var_5 = 2794027881538394068LL;
unsigned int var_6 = 3843975094U;
long long int var_7 = -1123459313677474526LL;
unsigned int var_8 = 513996709U;
long long int var_10 = 7231110166118624871LL;
long long int var_11 = 2094326617584675995LL;
unsigned int var_12 = 2785941460U;
unsigned int var_13 = 2932349802U;
unsigned int var_14 = 1990402956U;
int zero = 0;
unsigned short var_15 = (unsigned short)7235;
long long int var_16 = 8687338151314072944LL;
unsigned int var_17 = 2352938227U;
long long int var_18 = -1787040005731043068LL;
unsigned int var_19 = 3921769718U;
long long int var_20 = 3945752479358109008LL;
long long int var_21 = 1556669088987911357LL;
unsigned int var_22 = 793043331U;
signed char arr_4 [21] ;
long long int arr_13 [25] ;
long long int arr_15 [25] [25] [25] ;
signed char arr_16 [25] [25] [25] ;
unsigned short arr_20 [25] ;
long long int arr_9 [21] [21] ;
unsigned int arr_10 [21] [21] [21] ;
long long int arr_14 [25] ;
unsigned int arr_17 [25] [25] ;
long long int arr_18 [25] [25] ;
unsigned int arr_21 [25] ;
long long int arr_22 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (signed char)75;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = -3994720456984139078LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 8548480876916395860LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)112 : (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = (unsigned short)37266;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? -5913855244039901504LL : -4729524432051800308LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2920421950U : 3553077889U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = 7067124759947535716LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? 4101358646U : 1013717703U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? 7273076332172553689LL : -1747582538741518273LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = 4092139581U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_22 [i_0] = -327916294395340552LL;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
