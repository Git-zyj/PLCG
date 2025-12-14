#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_17 = (unsigned short)24171;
int zero = 0;
unsigned char var_19 = (unsigned char)228;
unsigned char var_20 = (unsigned char)216;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)80;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)95;
_Bool var_25 = (_Bool)0;
_Bool var_26 = (_Bool)1;
unsigned char var_27 = (unsigned char)185;
unsigned short var_28 = (unsigned short)15197;
_Bool var_29 = (_Bool)1;
_Bool var_30 = (_Bool)0;
_Bool var_31 = (_Bool)0;
unsigned char var_32 = (unsigned char)7;
_Bool var_33 = (_Bool)0;
unsigned char arr_5 [20] [20] ;
unsigned short arr_9 [20] [20] ;
unsigned short arr_15 [12] ;
unsigned char arr_20 [12] ;
unsigned short arr_25 [12] [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)31152;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (unsigned short)56776;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_20 [i_0] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)3919;
}

void checksum() {
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
