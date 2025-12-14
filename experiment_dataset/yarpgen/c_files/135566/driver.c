#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5669566998530722132LL;
unsigned short var_2 = (unsigned short)60130;
signed char var_3 = (signed char)74;
unsigned char var_4 = (unsigned char)58;
long long int var_8 = -185820957440081037LL;
unsigned char var_9 = (unsigned char)89;
unsigned short var_10 = (unsigned short)42205;
unsigned short var_11 = (unsigned short)21482;
unsigned long long int var_12 = 10199384160418071386ULL;
unsigned char var_13 = (unsigned char)203;
signed char var_15 = (signed char)-50;
long long int var_16 = -7569169159541300392LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-4191;
int var_20 = -1167027681;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)564;
long long int arr_0 [21] ;
int arr_3 [21] [21] ;
int arr_5 [21] ;
unsigned char arr_6 [21] [21] ;
unsigned short arr_9 [21] [21] [21] [21] [21] ;
unsigned char arr_12 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -843902843944872278LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = -1340327952;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -1766360325 : 447892667;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)153 : (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)43104;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)159 : (unsigned char)4;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
