#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)28;
signed char var_4 = (signed char)-66;
unsigned int var_10 = 731966410U;
signed char var_11 = (signed char)69;
int zero = 0;
unsigned long long int var_14 = 16597988088030006570ULL;
int var_15 = 1698928411;
signed char var_16 = (signed char)-81;
signed char var_17 = (signed char)-35;
int var_18 = 840752352;
unsigned char var_19 = (unsigned char)59;
unsigned long long int arr_1 [15] [15] ;
unsigned long long int arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 10924719521521709410ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 18066108296325792605ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
