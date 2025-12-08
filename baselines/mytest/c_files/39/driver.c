#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15109;
signed char var_1 = (signed char)45;
unsigned long long int var_6 = 2935427939394830718ULL;
_Bool var_9 = (_Bool)1;
short var_12 = (short)26117;
unsigned char var_13 = (unsigned char)161;
int zero = 0;
signed char var_15 = (signed char)79;
signed char var_16 = (signed char)10;
unsigned long long int var_17 = 5169605624346756083ULL;
int var_18 = -604314587;
unsigned short var_19 = (unsigned short)63494;
unsigned long long int var_20 = 282531650267169283ULL;
_Bool var_21 = (_Bool)0;
unsigned char arr_0 [16] [16] ;
long long int arr_4 [25] ;
unsigned long long int arr_7 [25] [25] [25] [25] ;
_Bool arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -1570654110854429285LL : -7756440661715476415LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 11038846583962655387ULL : 16982599869643821469ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
