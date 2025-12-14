#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)7837;
signed char var_9 = (signed char)48;
short var_10 = (short)-3302;
unsigned int var_12 = 1156442587U;
unsigned short var_14 = (unsigned short)47568;
unsigned short var_17 = (unsigned short)47739;
int zero = 0;
int var_18 = -864276846;
signed char var_19 = (signed char)-59;
unsigned short var_20 = (unsigned short)18620;
long long int var_21 = -6272227146579504405LL;
signed char arr_1 [22] ;
unsigned int arr_2 [22] [22] [22] ;
signed char arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)-115;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 3670595848U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-50 : (signed char)87;
}

void checksum() {
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
