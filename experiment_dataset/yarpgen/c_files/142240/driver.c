#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7819452630330844847LL;
signed char var_2 = (signed char)31;
unsigned char var_3 = (unsigned char)137;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 2215882041454046048ULL;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)189;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 3957795035U;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 10965567927695151016ULL;
unsigned short var_16 = (unsigned short)14566;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)212;
long long int var_19 = 8970486288567254558LL;
unsigned char var_20 = (unsigned char)172;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 953979717U;
unsigned short var_23 = (unsigned short)13914;
unsigned int var_24 = 220644003U;
unsigned int var_25 = 2106269205U;
long long int var_26 = 1143099952457502057LL;
unsigned char arr_1 [22] ;
unsigned long long int arr_4 [22] [22] [22] ;
signed char arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 15667532124182625348ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)114 : (signed char)-51;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
