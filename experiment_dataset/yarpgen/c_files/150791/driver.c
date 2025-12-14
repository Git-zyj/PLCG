#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6859176601092437315LL;
int var_5 = -489375548;
unsigned long long int var_8 = 1922109378731075032ULL;
_Bool var_10 = (_Bool)0;
short var_17 = (short)4810;
int zero = 0;
unsigned char var_18 = (unsigned char)75;
signed char var_19 = (signed char)104;
signed char var_20 = (signed char)31;
signed char var_21 = (signed char)65;
unsigned short var_22 = (unsigned short)52742;
unsigned long long int var_23 = 1455011414594553852ULL;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)-7;
_Bool var_26 = (_Bool)0;
int var_27 = -1365443792;
unsigned long long int var_28 = 7893332653765245360ULL;
int arr_1 [14] ;
unsigned long long int arr_3 [14] [14] [14] ;
long long int arr_6 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -159022220;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 12898760440216404838ULL : 16729935381153724178ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 4997713402242515777LL : 5550856821778002498LL;
}

void checksum() {
    hash(&seed, var_18);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
