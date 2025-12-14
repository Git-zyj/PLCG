#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)173;
unsigned short var_3 = (unsigned short)10102;
signed char var_5 = (signed char)24;
unsigned short var_9 = (unsigned short)9543;
_Bool var_13 = (_Bool)1;
short var_15 = (short)-26837;
unsigned short var_17 = (unsigned short)12707;
long long int var_18 = 7464498887725467441LL;
int zero = 0;
unsigned char var_19 = (unsigned char)246;
unsigned short var_20 = (unsigned short)53;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)231;
unsigned int var_23 = 3851122673U;
unsigned short var_24 = (unsigned short)35104;
signed char var_25 = (signed char)0;
signed char var_26 = (signed char)49;
unsigned short var_27 = (unsigned short)1585;
int var_28 = 1564929610;
unsigned int var_29 = 2195069694U;
unsigned char arr_1 [20] [20] ;
_Bool arr_5 [20] ;
signed char arr_6 [20] [20] ;
unsigned long long int arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-53;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 2007726785489064601ULL;
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
