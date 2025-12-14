#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5323485320716559327LL;
unsigned int var_5 = 12729368U;
unsigned short var_7 = (unsigned short)19070;
unsigned char var_8 = (unsigned char)124;
_Bool var_9 = (_Bool)1;
unsigned char var_12 = (unsigned char)228;
int var_14 = 1282033809;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 10737211837079726745ULL;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 625200589U;
unsigned long long int var_20 = 6532572988730992082ULL;
short var_21 = (short)-17151;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)72;
_Bool var_24 = (_Bool)0;
unsigned long long int var_25 = 3874403778589736668ULL;
unsigned long long int var_26 = 701577735123074603ULL;
unsigned long long int var_27 = 2699433080499363405ULL;
unsigned short var_28 = (unsigned short)64021;
short arr_2 [25] ;
short arr_7 [25] [25] [25] [25] [25] [25] ;
unsigned short arr_8 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-6916 : (short)8302;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (short)22257 : (short)-29789;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)54441 : (unsigned short)33751;
}

void checksum() {
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
