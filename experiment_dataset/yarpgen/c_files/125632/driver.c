#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)21;
unsigned char var_1 = (unsigned char)147;
unsigned char var_2 = (unsigned char)225;
unsigned short var_3 = (unsigned short)6331;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
short var_6 = (short)19044;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)42118;
unsigned char var_10 = (unsigned char)218;
unsigned int var_11 = 49615668U;
unsigned short var_12 = (unsigned short)17554;
int zero = 0;
unsigned char var_13 = (unsigned char)144;
short var_14 = (short)14355;
short var_15 = (short)-17645;
unsigned char var_16 = (unsigned char)125;
_Bool var_17 = (_Bool)0;
long long int var_18 = 6112546044923636063LL;
unsigned char var_19 = (unsigned char)103;
unsigned short var_20 = (unsigned short)45278;
unsigned char var_21 = (unsigned char)179;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)175;
short var_24 = (short)-21329;
unsigned short var_25 = (unsigned short)52534;
unsigned char var_26 = (unsigned char)102;
unsigned char var_27 = (unsigned char)238;
unsigned char var_28 = (unsigned char)154;
short var_29 = (short)25071;
short var_30 = (short)-24307;
_Bool var_31 = (_Bool)0;
long long int var_32 = -4047005255593224779LL;
short var_33 = (short)18016;
_Bool var_34 = (_Bool)1;
unsigned char var_35 = (unsigned char)78;
unsigned long long int arr_2 [16] [16] ;
_Bool arr_5 [15] ;
unsigned char arr_38 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 18400515430937480178ULL : 6278540888094886129ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (unsigned char)82;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
