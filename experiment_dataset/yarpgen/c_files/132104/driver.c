#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2854393723U;
_Bool var_1 = (_Bool)0;
long long int var_3 = -8600383572691489965LL;
signed char var_4 = (signed char)120;
unsigned short var_5 = (unsigned short)50954;
int var_9 = 1008846552;
unsigned long long int var_11 = 9198219809016800390ULL;
unsigned short var_12 = (unsigned short)26057;
unsigned char var_14 = (unsigned char)135;
unsigned char var_16 = (unsigned char)166;
int zero = 0;
unsigned short var_19 = (unsigned short)23287;
int var_20 = 1153904647;
unsigned long long int var_21 = 8462815972064987959ULL;
int arr_0 [12] ;
unsigned long long int arr_1 [12] ;
unsigned short arr_2 [12] [12] ;
unsigned char arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 806573000;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 15575462776878544894ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)3875;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)18;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
