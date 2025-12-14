#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18320554245147792709ULL;
unsigned int var_1 = 3370316952U;
unsigned char var_4 = (unsigned char)152;
short var_5 = (short)-32245;
unsigned char var_8 = (unsigned char)22;
long long int var_9 = -2569940515517586658LL;
unsigned int var_10 = 4021282610U;
unsigned int var_12 = 3698562936U;
int zero = 0;
unsigned char var_13 = (unsigned char)156;
unsigned char var_14 = (unsigned char)207;
unsigned char var_15 = (unsigned char)68;
short var_16 = (short)-15036;
signed char var_17 = (signed char)-59;
long long int var_18 = -7017859964943183670LL;
int var_19 = -1013378677;
unsigned long long int arr_0 [13] [13] ;
short arr_1 [13] ;
signed char arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 11499214201336409916ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)23585;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-106;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
