#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-466;
signed char var_10 = (signed char)81;
long long int var_12 = -7127453154917015491LL;
unsigned long long int var_14 = 13033754994612019047ULL;
unsigned short var_15 = (unsigned short)56463;
unsigned long long int var_16 = 1054413574903651407ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)27018;
signed char var_20 = (signed char)74;
unsigned short var_21 = (unsigned short)33844;
signed char var_22 = (signed char)-124;
long long int var_23 = -3878401292819519191LL;
int arr_0 [25] [25] ;
unsigned long long int arr_5 [25] [25] [25] ;
unsigned long long int arr_7 [25] [25] ;
unsigned short arr_10 [25] ;
signed char arr_12 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 1179190455;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 17108399574106973660ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = 14854743247590616558ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (unsigned short)385;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (signed char)-12;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
