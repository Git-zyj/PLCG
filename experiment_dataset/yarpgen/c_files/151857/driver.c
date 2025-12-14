#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11868152697514045780ULL;
unsigned int var_7 = 1667372679U;
int var_8 = 449271054;
int var_13 = -910534100;
short var_14 = (short)-18344;
int zero = 0;
short var_18 = (short)18837;
int var_19 = 755302147;
long long int var_20 = -7027297079722096776LL;
int var_21 = 1221758415;
unsigned int var_22 = 1214868147U;
short var_23 = (short)-17588;
unsigned char arr_0 [25] ;
unsigned int arr_2 [25] [25] ;
short arr_3 [25] [25] ;
unsigned long long int arr_5 [25] [25] ;
unsigned int arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 1462508469U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (short)23434;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 15826645982403712352ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 695107100U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
