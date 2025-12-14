#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24619;
unsigned short var_2 = (unsigned short)29513;
long long int var_3 = -6694972689600922961LL;
signed char var_6 = (signed char)-121;
int var_7 = 817280003;
short var_8 = (short)15194;
int var_9 = -130635779;
int zero = 0;
signed char var_11 = (signed char)7;
signed char var_12 = (signed char)-107;
long long int var_13 = 4917960757361766433LL;
long long int var_14 = -929423249018704764LL;
unsigned short arr_1 [16] ;
unsigned long long int arr_2 [16] [16] [16] ;
short arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)54584;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 5707819453215840756ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (short)-6602;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
