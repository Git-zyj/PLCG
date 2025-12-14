#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15645;
long long int var_2 = -1401777066823620410LL;
signed char var_3 = (signed char)-12;
long long int var_4 = 4925905557231481258LL;
signed char var_5 = (signed char)-89;
signed char var_7 = (signed char)-11;
int var_8 = -2101394365;
unsigned short var_9 = (unsigned short)2298;
int zero = 0;
signed char var_10 = (signed char)-65;
int var_11 = 1093712568;
long long int var_12 = -5997916686856805901LL;
short var_13 = (short)716;
unsigned short var_14 = (unsigned short)19373;
signed char var_15 = (signed char)-101;
int arr_0 [20] [20] ;
signed char arr_1 [20] [20] ;
unsigned short arr_3 [20] ;
signed char arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = -1190399547;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)286;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (signed char)60;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
