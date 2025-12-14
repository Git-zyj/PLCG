#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 180384692;
short var_8 = (short)-26791;
int zero = 0;
unsigned char var_12 = (unsigned char)142;
unsigned int var_13 = 1357982519U;
unsigned int var_14 = 2216727207U;
signed char var_15 = (signed char)-9;
unsigned long long int arr_2 [18] ;
short arr_3 [18] ;
unsigned char arr_4 [18] [18] ;
short arr_5 [18] ;
short arr_9 [18] [18] [18] ;
_Bool arr_10 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 5125263322493103482ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)-25467;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)32 : (unsigned char)107;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (short)-11069;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-2888 : (short)-2198;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
