#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)197;
signed char var_1 = (signed char)122;
int var_2 = -1401918832;
unsigned short var_3 = (unsigned short)64845;
signed char var_4 = (signed char)-120;
short var_5 = (short)20184;
unsigned long long int var_6 = 13557904394266837979ULL;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
short var_9 = (short)20470;
unsigned long long int var_10 = 10965552247950277997ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)45441;
unsigned long long int var_12 = 17250802115372061591ULL;
short var_13 = (short)-28011;
unsigned char var_14 = (unsigned char)182;
unsigned char var_15 = (unsigned char)80;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)144;
int arr_1 [12] [12] ;
int arr_3 [12] [12] ;
unsigned short arr_7 [12] ;
_Bool arr_12 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? -581552224 : 1328364812;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? -506528614 : -1280274087;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)12190 : (unsigned short)30806;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
