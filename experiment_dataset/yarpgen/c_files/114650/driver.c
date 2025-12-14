#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-25231;
unsigned long long int var_7 = 10589074318306530758ULL;
_Bool var_10 = (_Bool)0;
short var_12 = (short)-8939;
short var_13 = (short)-10881;
int zero = 0;
long long int var_17 = -3222833256700042938LL;
long long int var_18 = 5250997427983580762LL;
unsigned short var_19 = (unsigned short)64377;
unsigned int var_20 = 3367870898U;
long long int var_21 = -948397225712386064LL;
unsigned int var_22 = 4265168810U;
short arr_3 [18] ;
long long int arr_4 [18] ;
unsigned int arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)20562;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -7302207256252367273LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 3084900420U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
