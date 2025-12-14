#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9695855603984712489ULL;
int var_7 = 1106583764;
long long int var_9 = -3509610563221058824LL;
unsigned long long int var_10 = 7423112202123356334ULL;
int var_11 = 970671461;
unsigned long long int var_12 = 15116212937545209207ULL;
unsigned short var_14 = (unsigned short)61529;
int zero = 0;
short var_15 = (short)-16389;
int var_16 = 556477847;
int var_17 = -129546098;
unsigned int var_18 = 2308482199U;
int var_19 = 1894361248;
int var_20 = 1614444816;
int arr_0 [20] ;
unsigned short arr_2 [20] ;
unsigned int arr_3 [20] ;
_Bool arr_4 [20] [20] ;
unsigned short arr_6 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -1173270922 : -1255862975;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)28630;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1750914849U : 2902939931U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)26828;
}

void checksum() {
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
