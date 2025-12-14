#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22227;
long long int var_2 = -5517404332429223899LL;
short var_3 = (short)-7453;
int var_4 = -88505473;
long long int var_5 = 3811562126071454004LL;
unsigned int var_7 = 338315930U;
short var_11 = (short)-2712;
long long int var_12 = 6438910361774794937LL;
unsigned char var_15 = (unsigned char)58;
signed char var_17 = (signed char)42;
short var_19 = (short)-4435;
int zero = 0;
signed char var_20 = (signed char)9;
short var_21 = (short)-12640;
signed char var_22 = (signed char)116;
short var_23 = (short)-3547;
_Bool var_24 = (_Bool)0;
int var_25 = -711221725;
unsigned int var_26 = 2977599621U;
unsigned short var_27 = (unsigned short)34238;
int arr_0 [16] ;
signed char arr_1 [16] ;
unsigned int arr_4 [16] [16] ;
long long int arr_5 [16] [16] [16] ;
unsigned char arr_6 [16] ;
short arr_7 [16] [16] ;
long long int arr_8 [16] ;
int arr_9 [16] [16] [16] ;
long long int arr_12 [16] [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 933694269;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)97;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 2042775440U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3148390952418952513LL : -8282713361694236508LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)15 : (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (short)27294;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = -5535935823062199620LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1649404229 : 1327337778;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 6957451960188705686LL : 2416714033605975392LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
