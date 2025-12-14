#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6073176566627388775LL;
unsigned char var_1 = (unsigned char)4;
unsigned short var_4 = (unsigned short)39861;
int var_7 = -2069922153;
short var_8 = (short)-31588;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)8490;
unsigned short var_13 = (unsigned short)41792;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)8714;
unsigned short var_17 = (unsigned short)55059;
int zero = 0;
short var_20 = (short)-27701;
short var_21 = (short)10281;
short var_22 = (short)-15286;
unsigned char var_23 = (unsigned char)174;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)18246;
unsigned short var_26 = (unsigned short)47468;
_Bool var_27 = (_Bool)1;
short var_28 = (short)25900;
_Bool var_29 = (_Bool)0;
long long int var_30 = -7158222326288872433LL;
unsigned short arr_0 [16] ;
unsigned short arr_2 [16] ;
long long int arr_10 [16] [16] [16] ;
_Bool arr_14 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)42216;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)18769;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 2766702094729108152LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
}

void checksum() {
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
    hash(&seed, var_30);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
