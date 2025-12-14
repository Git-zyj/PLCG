#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62723;
signed char var_1 = (signed char)-60;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)60766;
unsigned short var_5 = (unsigned short)40146;
unsigned char var_9 = (unsigned char)117;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_11 = (short)-31556;
unsigned char var_12 = (unsigned char)58;
signed char var_13 = (signed char)124;
short var_14 = (short)21331;
short var_15 = (short)-229;
short var_16 = (short)-12306;
unsigned short arr_0 [18] ;
int arr_1 [18] ;
_Bool arr_3 [18] [18] ;
short arr_4 [18] [18] ;
short arr_6 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)2324;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -612220616;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-24929;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-4729 : (short)-5553;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
