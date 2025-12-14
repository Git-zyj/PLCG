#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)212;
short var_1 = (short)-9232;
unsigned long long int var_3 = 10176158417687699128ULL;
unsigned short var_4 = (unsigned short)46939;
unsigned long long int var_5 = 15401892076352576963ULL;
_Bool var_6 = (_Bool)0;
short var_8 = (short)17067;
unsigned short var_9 = (unsigned short)56931;
unsigned int var_12 = 3052971216U;
short var_13 = (short)-11683;
int zero = 0;
unsigned long long int var_14 = 8258646139166978280ULL;
signed char var_15 = (signed char)-2;
unsigned char var_16 = (unsigned char)216;
unsigned int arr_1 [12] [12] ;
short arr_2 [12] [12] [12] ;
int arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 3468653519U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)23021 : (short)29093;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = -606474129;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
