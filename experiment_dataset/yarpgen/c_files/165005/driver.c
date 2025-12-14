#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5472198437502125325LL;
unsigned short var_3 = (unsigned short)39919;
signed char var_17 = (signed char)5;
int var_18 = -715941257;
signed char var_19 = (signed char)-12;
int zero = 0;
unsigned short var_20 = (unsigned short)65440;
signed char var_21 = (signed char)-7;
unsigned int var_22 = 3209143150U;
short var_23 = (short)7087;
unsigned long long int var_24 = 12811945918077875660ULL;
int var_25 = 2062460984;
short arr_3 [13] [13] [13] ;
int arr_9 [13] [13] [13] [13] [13] [13] ;
int arr_12 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)16392;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1582015103;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = -1659820661;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
