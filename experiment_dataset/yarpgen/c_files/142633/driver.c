#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)50;
unsigned long long int var_2 = 6750609700522963251ULL;
unsigned long long int var_4 = 1733588945682497697ULL;
unsigned long long int var_5 = 14442474912839165333ULL;
unsigned long long int var_6 = 3767011856248266340ULL;
unsigned char var_8 = (unsigned char)22;
short var_9 = (short)22882;
signed char var_10 = (signed char)-50;
int zero = 0;
int var_11 = -1161708916;
unsigned char var_12 = (unsigned char)177;
long long int var_13 = 3465395515609718495LL;
unsigned int var_14 = 2249239237U;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 8511825002422249212ULL;
long long int arr_2 [10] [10] ;
long long int arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 810482234054577266LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = -3975066747581598514LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
