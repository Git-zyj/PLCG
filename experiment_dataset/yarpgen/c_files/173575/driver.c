#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_4 = -3460239502623873521LL;
signed char var_6 = (signed char)-6;
short var_7 = (short)1333;
unsigned int var_8 = 2408522042U;
unsigned char var_9 = (unsigned char)215;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)115;
unsigned char var_16 = (unsigned char)38;
int var_17 = -1353740965;
long long int var_18 = 5034439518367582340LL;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)3;
int arr_1 [16] ;
unsigned short arr_2 [16] [16] ;
unsigned char arr_8 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 509594779;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)10682;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)14;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
