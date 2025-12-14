#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12561193484970763525ULL;
short var_2 = (short)-14523;
long long int var_5 = 9121561842194672272LL;
signed char var_6 = (signed char)-125;
unsigned char var_7 = (unsigned char)46;
unsigned long long int var_8 = 13329144835068331569ULL;
long long int var_9 = -3563637290081581183LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_11 = -5827847553041900131LL;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-11174;
short var_15 = (short)-17140;
int arr_11 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 621279681 : -1501806715;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
