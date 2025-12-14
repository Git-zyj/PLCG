#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1775936543;
unsigned short var_2 = (unsigned short)2107;
unsigned char var_3 = (unsigned char)102;
signed char var_4 = (signed char)4;
signed char var_6 = (signed char)-75;
unsigned char var_9 = (unsigned char)46;
unsigned long long int var_11 = 18007823784720538774ULL;
short var_13 = (short)-31916;
int zero = 0;
signed char var_14 = (signed char)-73;
unsigned short var_15 = (unsigned short)13947;
unsigned short var_16 = (unsigned short)22321;
int var_17 = -786973468;
short var_18 = (short)19651;
int var_19 = -1146569612;
_Bool arr_5 [17] [17] ;
unsigned short arr_7 [17] [17] [17] [17] ;
int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)30856;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 452764826 : 1258264130;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
