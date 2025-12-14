#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9520383899012788313ULL;
int var_1 = 159024293;
long long int var_2 = -7201274291063404442LL;
int var_4 = 204717646;
unsigned long long int var_7 = 13221127344248367893ULL;
signed char var_8 = (signed char)89;
unsigned char var_12 = (unsigned char)76;
unsigned long long int var_13 = 15812212919023825741ULL;
unsigned char var_15 = (unsigned char)166;
int zero = 0;
int var_18 = 549603926;
int var_19 = 75446184;
unsigned char var_20 = (unsigned char)113;
long long int var_21 = 2665892351246519079LL;
int var_22 = 1300096446;
short arr_2 [24] ;
long long int arr_3 [24] [24] ;
unsigned char arr_4 [24] ;
int arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)4474;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? -1817806801147393334LL : -3996230628262728395LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)137 : (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -1232682279 : 1764523956;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
