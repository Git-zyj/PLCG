#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-59;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-13030;
unsigned char var_5 = (unsigned char)202;
signed char var_7 = (signed char)-97;
signed char var_8 = (signed char)2;
signed char var_9 = (signed char)-108;
unsigned short var_10 = (unsigned short)16608;
unsigned short var_11 = (unsigned short)45605;
int var_12 = -750901532;
unsigned char var_14 = (unsigned char)28;
unsigned int var_15 = 2807245004U;
int var_16 = -2012411402;
signed char var_17 = (signed char)-77;
int zero = 0;
short var_18 = (short)-22312;
signed char var_19 = (signed char)70;
signed char var_20 = (signed char)3;
int var_21 = -77973447;
short var_22 = (short)-16474;
unsigned short var_23 = (unsigned short)9023;
unsigned char arr_4 [22] [22] [22] ;
signed char arr_7 [22] [22] [22] [22] ;
int arr_14 [22] [22] ;
unsigned char arr_15 [22] ;
int arr_16 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? -903908300 : -1421970733;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_16 [i_0] [i_1] = 423295082;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
