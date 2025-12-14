#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-7;
long long int var_1 = 8830400868820689108LL;
int var_2 = -808525106;
long long int var_4 = 4661421372332393451LL;
signed char var_5 = (signed char)-30;
int var_7 = 126214931;
signed char var_8 = (signed char)-12;
signed char var_9 = (signed char)-49;
signed char var_10 = (signed char)-16;
int var_12 = -1533714016;
signed char var_13 = (signed char)-26;
unsigned long long int var_14 = 12804959232507109737ULL;
int var_15 = -11081476;
int zero = 0;
signed char var_18 = (signed char)41;
signed char var_19 = (signed char)-81;
signed char var_20 = (signed char)-17;
signed char var_21 = (signed char)4;
int var_22 = 1028376904;
int var_23 = -1131342827;
unsigned long long int var_24 = 17714483589227838639ULL;
signed char arr_0 [18] ;
long long int arr_1 [18] ;
signed char arr_2 [18] [18] ;
signed char arr_3 [18] ;
signed char arr_4 [18] ;
signed char arr_9 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)-68;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 7328759651654327125LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-86 : (signed char)-97;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)0 : (signed char)-31;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)116 : (signed char)66;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)66;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
