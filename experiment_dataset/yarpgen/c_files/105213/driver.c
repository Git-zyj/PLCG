#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)28;
long long int var_1 = 5807851048675369001LL;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2685095909U;
short var_4 = (short)19460;
short var_5 = (short)28937;
short var_6 = (short)-26153;
int var_7 = -1401580034;
short var_8 = (short)-28880;
int var_9 = 719884151;
int zero = 0;
int var_10 = -1332971073;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 8392308269209019920ULL;
short var_13 = (short)13414;
_Bool var_14 = (_Bool)0;
long long int var_15 = -8870841869972514099LL;
int var_16 = -1000753423;
short arr_0 [24] [24] ;
long long int arr_2 [24] ;
short arr_4 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (short)5306;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = -1418880525611298620LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (short)8807;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
