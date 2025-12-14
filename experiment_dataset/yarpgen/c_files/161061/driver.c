#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)16875;
long long int var_4 = 3385684871426426361LL;
int var_8 = 2103066349;
short var_13 = (short)-5859;
int var_14 = 1675068619;
int zero = 0;
unsigned long long int var_16 = 13304915719114338306ULL;
short var_17 = (short)13293;
long long int var_18 = 6272222992546375581LL;
int var_19 = -332692021;
unsigned long long int var_20 = 16845573749072254049ULL;
long long int arr_1 [18] ;
short arr_3 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 4836345879639639949LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-17028;
}

void checksum() {
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
