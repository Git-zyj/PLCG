#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11082;
short var_2 = (short)-23327;
unsigned short var_5 = (unsigned short)30284;
int var_7 = 1190049684;
short var_8 = (short)16962;
unsigned short var_10 = (unsigned short)25095;
int zero = 0;
short var_11 = (short)-17118;
long long int var_12 = 5147774785826881040LL;
long long int var_13 = -5342003956959277282LL;
unsigned short var_14 = (unsigned short)57443;
int arr_2 [20] ;
long long int arr_4 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -1179494968;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 4668035886749190973LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
