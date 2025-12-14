#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-124;
int var_4 = 327853759;
unsigned int var_7 = 1688682278U;
short var_9 = (short)19684;
unsigned short var_10 = (unsigned short)5193;
signed char var_11 = (signed char)35;
int var_12 = 2137556180;
short var_14 = (short)12805;
signed char var_16 = (signed char)-85;
short var_17 = (short)-4979;
int zero = 0;
short var_18 = (short)-29370;
signed char var_19 = (signed char)-91;
short var_20 = (short)-23792;
short var_21 = (short)-13874;
int var_22 = -1327969886;
short var_23 = (short)8402;
unsigned int var_24 = 1741534718U;
unsigned int arr_0 [19] ;
unsigned int arr_1 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1676113234U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 2645176859U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
