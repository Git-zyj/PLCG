#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)0;
unsigned long long int var_1 = 13459022276858192668ULL;
unsigned long long int var_3 = 18104666856125736305ULL;
short var_5 = (short)-11767;
long long int var_6 = 1637543307981440261LL;
unsigned char var_7 = (unsigned char)90;
unsigned long long int var_8 = 4296355815546614682ULL;
unsigned short var_10 = (unsigned short)35946;
unsigned char var_11 = (unsigned char)10;
long long int var_12 = -7744882800305329359LL;
long long int var_13 = -6021740976873347765LL;
long long int var_15 = -5009114353738767997LL;
int var_16 = -399358487;
int zero = 0;
unsigned long long int var_17 = 13564104955330853177ULL;
short var_18 = (short)-1891;
short var_19 = (short)-3191;
long long int var_20 = -3335361714419105484LL;
short var_21 = (short)1930;
long long int var_22 = -7311615101780299768LL;
unsigned long long int var_23 = 12600753972540559358ULL;
unsigned long long int var_24 = 14060645607001194151ULL;
int var_25 = 829494302;
unsigned long long int var_26 = 12032855054475774595ULL;
signed char var_27 = (signed char)-77;
short var_28 = (short)14546;
short var_29 = (short)-10061;
short var_30 = (short)27230;
unsigned int var_31 = 1740604257U;
unsigned char var_32 = (unsigned char)32;
unsigned short var_33 = (unsigned short)4002;
unsigned short var_34 = (unsigned short)55457;
short arr_6 [13] [13] [13] [13] ;
short arr_8 [24] [24] ;
long long int arr_9 [24] [24] ;
_Bool arr_11 [24] [24] ;
int arr_13 [24] [24] [24] ;
unsigned short arr_18 [24] [24] [24] ;
unsigned int arr_23 [24] [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)32158;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-29113;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = -5310958311459049425LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 1107968456;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned short)4969;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 2672177346U : 4211951792U;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
