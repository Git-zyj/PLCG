#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)32663;
int var_3 = 1812394728;
unsigned short var_4 = (unsigned short)27071;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 12856464611891870336ULL;
short var_9 = (short)3444;
signed char var_14 = (signed char)-40;
int zero = 0;
unsigned short var_15 = (unsigned short)50425;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-70;
unsigned int var_18 = 2715603778U;
short var_19 = (short)21388;
unsigned int var_20 = 3646006818U;
_Bool var_21 = (_Bool)0;
long long int var_22 = -4471386628036397350LL;
unsigned short var_23 = (unsigned short)55198;
unsigned int var_24 = 818471991U;
short var_25 = (short)-1523;
long long int var_26 = 4847874494658449358LL;
unsigned short arr_5 [16] [16] [16] ;
signed char arr_6 [16] [16] [16] ;
signed char arr_10 [16] [16] [16] [16] ;
unsigned short arr_11 [21] ;
unsigned short arr_12 [21] ;
unsigned char arr_15 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)20299;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (signed char)-17;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (unsigned short)58592;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (unsigned short)1574;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)63;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
