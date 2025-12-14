#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27933;
unsigned short var_2 = (unsigned short)28816;
unsigned long long int var_5 = 12024277611751151379ULL;
_Bool var_6 = (_Bool)1;
int var_7 = 1683784686;
unsigned int var_8 = 3475016985U;
short var_9 = (short)-9762;
unsigned short var_10 = (unsigned short)47938;
unsigned char var_11 = (unsigned char)168;
unsigned long long int var_12 = 4752433930835486230ULL;
int zero = 0;
signed char var_13 = (signed char)14;
unsigned int var_14 = 2705936585U;
short var_15 = (short)-23107;
_Bool var_16 = (_Bool)1;
int var_17 = -1273536819;
long long int var_18 = -1045394212072931646LL;
unsigned long long int arr_0 [19] ;
unsigned int arr_1 [19] [19] ;
unsigned long long int arr_2 [19] [19] ;
signed char arr_3 [19] [19] ;
unsigned int arr_4 [19] ;
unsigned short arr_5 [19] [19] [19] ;
short arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 134163225561349736ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 4022922193U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 11753404264494043955ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-62 : (signed char)-58;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 1178521982U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)7736;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)-4757 : (short)-3202;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
