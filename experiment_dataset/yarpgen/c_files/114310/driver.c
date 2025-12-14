#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)22;
unsigned short var_7 = (unsigned short)46193;
unsigned char var_8 = (unsigned char)50;
int var_9 = 854945292;
unsigned char var_13 = (unsigned char)146;
int var_14 = 1398397906;
unsigned short var_16 = (unsigned short)25001;
unsigned char var_18 = (unsigned char)212;
int zero = 0;
int var_20 = -174196625;
unsigned char var_21 = (unsigned char)108;
unsigned int var_22 = 530360676U;
unsigned char var_23 = (unsigned char)168;
int var_24 = 820652387;
unsigned char var_25 = (unsigned char)173;
long long int var_26 = -7816256438360755019LL;
unsigned int var_27 = 1146449384U;
int arr_0 [22] ;
int arr_1 [22] ;
unsigned char arr_3 [20] ;
unsigned short arr_4 [20] ;
_Bool arr_8 [19] [19] ;
unsigned int arr_9 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -532379148;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -44085367;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned short)40619;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = 643447982U;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
