#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 320390375U;
unsigned int var_3 = 902213228U;
short var_4 = (short)5413;
unsigned char var_5 = (unsigned char)10;
unsigned short var_6 = (unsigned short)1506;
signed char var_8 = (signed char)-92;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)202;
int zero = 0;
unsigned char var_13 = (unsigned char)152;
signed char var_14 = (signed char)-101;
unsigned long long int var_15 = 14487635872285661751ULL;
unsigned char var_16 = (unsigned char)188;
_Bool arr_3 [17] [17] ;
_Bool arr_6 [17] [17] [17] ;
unsigned short arr_8 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)25324 : (unsigned short)54385;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
