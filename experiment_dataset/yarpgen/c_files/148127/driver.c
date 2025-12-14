#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28035;
short var_1 = (short)-30664;
unsigned short var_2 = (unsigned short)24491;
unsigned short var_3 = (unsigned short)3086;
short var_4 = (short)-27149;
short var_6 = (short)-32745;
unsigned short var_8 = (unsigned short)39950;
unsigned short var_9 = (unsigned short)47109;
unsigned long long int var_10 = 5526875563187263874ULL;
unsigned short var_11 = (unsigned short)21483;
int zero = 0;
short var_12 = (short)13506;
unsigned long long int var_13 = 4120644497300033623ULL;
unsigned long long int var_14 = 18311459815483033173ULL;
short var_15 = (short)32484;
short var_16 = (short)2919;
unsigned short var_17 = (unsigned short)26302;
int var_18 = -1278026430;
unsigned short arr_0 [18] [18] ;
int arr_2 [18] [18] ;
unsigned long long int arr_9 [18] [18] [18] [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)8163;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = -966410536;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 7266583860936629661ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
