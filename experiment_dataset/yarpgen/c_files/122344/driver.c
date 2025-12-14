#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1058505866577374139ULL;
int var_1 = 1290487649;
unsigned short var_3 = (unsigned short)15798;
long long int var_6 = 9054557590233302845LL;
long long int var_7 = 4972031587821820585LL;
unsigned long long int var_8 = 17996123345714021925ULL;
unsigned short var_9 = (unsigned short)45783;
int var_10 = 339782195;
long long int var_13 = -1833130984929500403LL;
long long int var_14 = 573576045868812673LL;
long long int var_15 = -4255084682043519560LL;
unsigned short var_16 = (unsigned short)44601;
int zero = 0;
unsigned long long int var_17 = 912485317596349185ULL;
long long int var_18 = 4664558662388617157LL;
unsigned short var_19 = (unsigned short)21197;
unsigned long long int var_20 = 4638826593878592486ULL;
long long int arr_8 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -75972252411782145LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
