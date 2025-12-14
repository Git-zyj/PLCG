#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-105;
short var_2 = (short)-7965;
int var_6 = 263855283;
unsigned char var_7 = (unsigned char)145;
unsigned long long int var_14 = 3670958571124347986ULL;
short var_18 = (short)26261;
int zero = 0;
long long int var_19 = 6976856305449918124LL;
unsigned char var_20 = (unsigned char)104;
signed char var_21 = (signed char)55;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)238;
int var_24 = 1464702428;
unsigned long long int var_25 = 5598066101139052686ULL;
unsigned char var_26 = (unsigned char)151;
unsigned short var_27 = (unsigned short)15072;
unsigned char var_28 = (unsigned char)174;
short var_29 = (short)-3063;
short arr_0 [16] [16] ;
unsigned char arr_1 [16] ;
unsigned long long int arr_3 [16] ;
short arr_4 [16] [16] ;
unsigned long long int arr_5 [16] [16] ;
int arr_10 [16] ;
unsigned int arr_11 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-27988;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 16244754979504252173ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-13487;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 15811259208042128585ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = -733053197;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3441606908U : 1058912013U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
