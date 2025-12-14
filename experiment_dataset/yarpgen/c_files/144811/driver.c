#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 441585138;
long long int var_2 = 1283036743066503103LL;
unsigned short var_3 = (unsigned short)43404;
short var_4 = (short)31991;
unsigned int var_6 = 1016288020U;
long long int var_7 = 8536936796385279868LL;
unsigned int var_8 = 1092343770U;
unsigned int var_9 = 3987298532U;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 1036082904U;
unsigned char var_14 = (unsigned char)130;
long long int var_15 = -1067985223042306827LL;
short var_16 = (short)32727;
unsigned short var_17 = (unsigned short)62178;
unsigned char var_18 = (unsigned char)252;
unsigned short var_19 = (unsigned short)7647;
signed char var_20 = (signed char)44;
long long int var_21 = -1715447034795771483LL;
unsigned short var_22 = (unsigned short)18670;
unsigned int var_23 = 145644436U;
signed char arr_0 [19] [19] ;
_Bool arr_1 [19] ;
_Bool arr_3 [22] ;
unsigned short arr_5 [22] ;
unsigned char arr_6 [19] [19] ;
unsigned int arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned short)64605;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 2200790355U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
