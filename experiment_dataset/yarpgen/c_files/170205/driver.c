#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14708737691741356775ULL;
unsigned short var_1 = (unsigned short)34684;
unsigned int var_2 = 1053756168U;
unsigned int var_4 = 2742755770U;
unsigned int var_9 = 1661818076U;
unsigned short var_10 = (unsigned short)37539;
short var_11 = (short)4119;
unsigned int var_13 = 471657547U;
unsigned short var_14 = (unsigned short)57008;
unsigned int var_16 = 1885282943U;
long long int var_19 = -1802812111813199801LL;
int zero = 0;
unsigned short var_20 = (unsigned short)57742;
unsigned int var_21 = 2065375913U;
unsigned short var_22 = (unsigned short)45720;
unsigned int var_23 = 3826905960U;
unsigned short var_24 = (unsigned short)945;
unsigned long long int var_25 = 5651965918743349643ULL;
unsigned int var_26 = 4042370210U;
unsigned int arr_4 [20] [20] [20] ;
unsigned int arr_7 [20] [20] [20] [20] [20] [20] ;
long long int arr_10 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1614994715U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 1315848181U : 2922958425U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -7871723331009761321LL : 5475736247461152400LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
