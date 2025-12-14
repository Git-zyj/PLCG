#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -385780302676164303LL;
signed char var_1 = (signed char)85;
unsigned long long int var_2 = 16397205808538973117ULL;
int var_3 = 1424719961;
int var_4 = 300620469;
unsigned long long int var_5 = 1143862625589972663ULL;
unsigned long long int var_6 = 3170496092425934018ULL;
unsigned long long int var_7 = 1782557795624787599ULL;
unsigned int var_9 = 3059657067U;
unsigned short var_11 = (unsigned short)4913;
unsigned long long int var_12 = 13445937968772007954ULL;
signed char var_13 = (signed char)25;
signed char var_14 = (signed char)121;
unsigned char var_16 = (unsigned char)75;
unsigned long long int var_17 = 7435852645367563828ULL;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)152;
int zero = 0;
signed char var_20 = (signed char)53;
unsigned char var_21 = (unsigned char)167;
unsigned char var_22 = (unsigned char)127;
unsigned long long int var_23 = 14267643646158685464ULL;
unsigned long long int var_24 = 9585377373480637478ULL;
unsigned int var_25 = 4017873421U;
unsigned short arr_4 [13] ;
_Bool arr_5 [13] ;
unsigned char arr_16 [13] [13] [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)37602 : (unsigned short)25845;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? (unsigned char)62 : (unsigned char)110;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
