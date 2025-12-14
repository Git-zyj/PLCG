#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3787214574193292182LL;
short var_3 = (short)-4497;
unsigned long long int var_7 = 1580276572709530229ULL;
unsigned int var_11 = 3603152484U;
unsigned long long int var_12 = 11891374506311945541ULL;
long long int var_13 = 2684491142836571550LL;
signed char var_14 = (signed char)-17;
int zero = 0;
signed char var_19 = (signed char)-13;
unsigned int var_20 = 2770717230U;
short var_21 = (short)-30971;
signed char var_22 = (signed char)-30;
unsigned int var_23 = 2031535108U;
signed char var_24 = (signed char)68;
long long int arr_0 [23] ;
int arr_2 [23] ;
unsigned char arr_3 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = -523623830929883968LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 714510547;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)150;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
