#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2962;
unsigned char var_1 = (unsigned char)130;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)-27;
signed char var_8 = (signed char)-38;
unsigned long long int var_9 = 15978958218811667838ULL;
int var_10 = 1381477927;
unsigned short var_11 = (unsigned short)46127;
unsigned short var_12 = (unsigned short)65513;
int zero = 0;
short var_13 = (short)-19527;
unsigned short var_14 = (unsigned short)61777;
signed char var_15 = (signed char)65;
unsigned short var_16 = (unsigned short)32456;
short var_17 = (short)10958;
unsigned short var_18 = (unsigned short)1554;
_Bool var_19 = (_Bool)1;
_Bool arr_0 [18] ;
short arr_1 [18] [18] ;
signed char arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (short)22027;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)118 : (signed char)60;
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
