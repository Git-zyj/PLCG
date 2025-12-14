#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)31016;
signed char var_3 = (signed char)91;
unsigned short var_4 = (unsigned short)667;
unsigned char var_5 = (unsigned char)244;
int var_6 = 736630060;
unsigned short var_7 = (unsigned short)33218;
unsigned short var_8 = (unsigned short)12879;
int var_9 = 938562576;
unsigned short var_10 = (unsigned short)48955;
long long int var_11 = -3243955436884344206LL;
unsigned int var_13 = 3517825838U;
unsigned short var_14 = (unsigned short)27808;
unsigned long long int var_15 = 18125517717194477630ULL;
unsigned short var_18 = (unsigned short)36094;
int zero = 0;
unsigned short var_20 = (unsigned short)18599;
signed char var_21 = (signed char)89;
short var_22 = (short)1838;
short var_23 = (short)3385;
int var_24 = 1435857398;
unsigned int var_25 = 4233353945U;
int var_26 = -1008246659;
unsigned int var_27 = 199880101U;
long long int var_28 = -6775775723658342356LL;
unsigned char var_29 = (unsigned char)178;
short arr_3 [16] ;
unsigned int arr_20 [14] [14] [14] ;
unsigned short arr_21 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)-31118;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 609154611U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (unsigned short)1860;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
