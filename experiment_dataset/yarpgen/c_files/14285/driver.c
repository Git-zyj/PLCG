#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 113468568;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)170;
short var_7 = (short)-224;
int var_9 = -1309239902;
int var_11 = 384937492;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 18145422589475591805ULL;
unsigned long long int var_15 = 4083493153537194831ULL;
short var_16 = (short)32075;
unsigned char var_17 = (unsigned char)70;
int arr_0 [20] ;
int arr_4 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 375454852;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 31201069;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
