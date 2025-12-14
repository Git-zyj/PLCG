#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2348881448U;
signed char var_2 = (signed char)11;
unsigned short var_3 = (unsigned short)12591;
unsigned short var_4 = (unsigned short)4381;
long long int var_5 = 1921162201279980382LL;
int var_6 = 1714168942;
int var_7 = 1350128650;
int var_8 = -2068896811;
int zero = 0;
int var_11 = 1966031024;
long long int var_12 = 233291601910586984LL;
int var_13 = 1002665825;
int var_14 = 2013996952;
unsigned short var_15 = (unsigned short)31357;
int var_16 = 1105611564;
unsigned int arr_0 [14] ;
long long int arr_1 [14] [14] ;
unsigned int arr_2 [10] ;
unsigned int arr_3 [10] ;
int arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 691976692U : 1833727609U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 2374948267879623307LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 2827105611U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 3403688509U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? -58722396 : 952969791;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
