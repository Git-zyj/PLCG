#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23956;
short var_3 = (short)-13592;
unsigned int var_4 = 706512375U;
signed char var_5 = (signed char)73;
short var_6 = (short)-158;
signed char var_7 = (signed char)-27;
long long int var_9 = 2921280122734495872LL;
long long int var_11 = -729850868218229529LL;
unsigned short var_12 = (unsigned short)19411;
long long int var_13 = -1524038050309592232LL;
short var_14 = (short)28271;
int zero = 0;
int var_16 = 2055033376;
signed char var_17 = (signed char)83;
long long int var_18 = 1386122370856804205LL;
signed char var_19 = (signed char)-27;
unsigned short var_20 = (unsigned short)10655;
short var_21 = (short)-7434;
long long int var_22 = -404909520067292881LL;
signed char arr_0 [17] [17] ;
short arr_1 [17] ;
short arr_2 [17] ;
short arr_7 [14] ;
unsigned short arr_11 [14] [14] [14] ;
int arr_12 [14] ;
unsigned short arr_13 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)492;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)-5655;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (short)-31376;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)63569;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = -290733410;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned short)46393;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
