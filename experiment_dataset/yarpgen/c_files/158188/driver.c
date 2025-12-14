#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7078988245911305187LL;
unsigned char var_5 = (unsigned char)160;
int var_6 = -708240502;
unsigned int var_7 = 1787452220U;
long long int var_10 = -3998722675622124346LL;
long long int var_11 = -541898523036240799LL;
unsigned char var_12 = (unsigned char)169;
int zero = 0;
int var_18 = -358089367;
unsigned int var_19 = 3024711657U;
unsigned char var_20 = (unsigned char)73;
unsigned char var_21 = (unsigned char)170;
long long int var_22 = 6494947265419495059LL;
long long int var_23 = -6241328585369439866LL;
long long int var_24 = -2130767423024702141LL;
long long int var_25 = 3470872136665440623LL;
int var_26 = 700462548;
unsigned int var_27 = 1697756989U;
int var_28 = 365895239;
long long int var_29 = -7473510641875814557LL;
unsigned int var_30 = 1164936612U;
unsigned char var_31 = (unsigned char)126;
long long int var_32 = 3132132407055326737LL;
unsigned char arr_0 [21] [21] ;
unsigned char arr_1 [21] ;
unsigned char arr_5 [13] ;
long long int arr_7 [13] ;
unsigned char arr_8 [13] ;
int arr_12 [22] ;
unsigned char arr_16 [22] [22] ;
unsigned char arr_17 [22] ;
long long int arr_3 [21] [21] ;
unsigned char arr_6 [13] ;
unsigned int arr_10 [13] ;
long long int arr_11 [13] ;
unsigned char arr_18 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = -298952938901325654LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = -1771053149;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = -2552875917507256395LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 2246475003U : 1360286562U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -8196327401372408800LL : -7421807292109550027LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = (unsigned char)210;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
