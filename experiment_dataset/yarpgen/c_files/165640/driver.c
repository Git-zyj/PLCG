#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)13;
unsigned long long int var_4 = 4126291265419003653ULL;
short var_5 = (short)-24580;
unsigned short var_6 = (unsigned short)2380;
unsigned char var_7 = (unsigned char)195;
unsigned short var_9 = (unsigned short)29671;
int zero = 0;
unsigned long long int var_11 = 2740906519290723119ULL;
unsigned long long int var_12 = 11231895958256515226ULL;
signed char var_13 = (signed char)-126;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 8430362245432074478ULL;
unsigned long long int arr_0 [12] [12] ;
unsigned short arr_1 [12] ;
unsigned char arr_2 [12] [12] ;
short arr_3 [12] ;
signed char arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 5836416928552066286ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)8245;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (short)-11383;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (signed char)-5;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
