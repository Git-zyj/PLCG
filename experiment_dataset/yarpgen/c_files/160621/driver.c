#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4831893253884045322LL;
long long int var_3 = -7705367470075948887LL;
unsigned char var_5 = (unsigned char)171;
short var_6 = (short)3242;
long long int var_7 = 5832030523727484437LL;
unsigned char var_9 = (unsigned char)175;
signed char var_10 = (signed char)74;
int zero = 0;
unsigned long long int var_11 = 12173990163839238645ULL;
signed char var_12 = (signed char)15;
unsigned long long int var_13 = 5372285192220658984ULL;
signed char var_14 = (signed char)-99;
unsigned int var_15 = 2274285276U;
short var_16 = (short)-31219;
unsigned short var_17 = (unsigned short)19397;
signed char var_18 = (signed char)-109;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)95;
unsigned long long int var_21 = 13092818672089976872ULL;
long long int arr_0 [24] ;
int arr_4 [24] ;
_Bool arr_5 [24] [24] [24] [24] ;
int arr_10 [24] [24] [24] [24] [24] ;
long long int arr_16 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 4421642823652650395LL : 2852861376240500215LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 296859895 : 1149192906;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = -81100124;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = -2809319304998646104LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
