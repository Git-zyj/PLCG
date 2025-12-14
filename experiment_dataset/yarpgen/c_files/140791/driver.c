#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -704877035;
long long int var_4 = 3731649375863390736LL;
int var_5 = -1307070709;
unsigned int var_9 = 871429062U;
unsigned short var_11 = (unsigned short)49346;
int zero = 0;
unsigned char var_19 = (unsigned char)98;
short var_20 = (short)6379;
short var_21 = (short)-23124;
int var_22 = -1069307030;
long long int var_23 = 4488963080179397620LL;
short arr_2 [14] ;
long long int arr_3 [14] [14] [14] ;
int arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)17712;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1171932175473100589LL : -4448706589287506216LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -1806239415 : -569906351;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
