#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12299293049991115247ULL;
unsigned long long int var_3 = 16998767479206916294ULL;
long long int var_7 = -1603005144012543702LL;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)213;
long long int var_10 = -8090554204369764645LL;
unsigned char var_11 = (unsigned char)176;
unsigned char var_12 = (unsigned char)113;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 17192800886635343992ULL;
unsigned long long int var_16 = 17347026923331439075ULL;
signed char var_17 = (signed char)109;
unsigned long long int var_18 = 5026589256665288223ULL;
unsigned char var_19 = (unsigned char)223;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)181;
unsigned long long int var_22 = 16025836049219661702ULL;
unsigned char var_23 = (unsigned char)159;
unsigned char var_24 = (unsigned char)95;
unsigned short var_25 = (unsigned short)28859;
long long int var_26 = -1777177651227320676LL;
_Bool var_27 = (_Bool)1;
signed char var_28 = (signed char)-67;
signed char var_29 = (signed char)123;
unsigned short arr_0 [18] ;
unsigned char arr_3 [18] [18] [18] ;
signed char arr_5 [16] ;
_Bool arr_7 [16] ;
short arr_9 [16] ;
long long int arr_11 [16] [16] [16] ;
signed char arr_13 [16] [16] [16] ;
signed char arr_14 [16] [16] [16] [16] ;
unsigned short arr_16 [16] [16] [16] [16] ;
long long int arr_4 [18] ;
_Bool arr_20 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)13737;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)123 : (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-111 : (signed char)3;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (short)-9044;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -7691101003673820424LL : -4798490081147537164LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-104 : (signed char)-110;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (unsigned short)16783;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 1994310523786497384LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
