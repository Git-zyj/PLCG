#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 503643895U;
unsigned long long int var_2 = 18317594716847629374ULL;
unsigned short var_4 = (unsigned short)65152;
unsigned short var_5 = (unsigned short)30891;
short var_6 = (short)29137;
int var_9 = 1172418480;
unsigned long long int var_11 = 14522205624165732361ULL;
unsigned long long int var_16 = 14145592324927391777ULL;
signed char var_17 = (signed char)58;
int zero = 0;
unsigned int var_19 = 2248128062U;
signed char var_20 = (signed char)7;
int var_21 = 1620587633;
signed char var_22 = (signed char)115;
int var_23 = 1349617093;
unsigned int var_24 = 2800653663U;
unsigned short var_25 = (unsigned short)27785;
int var_26 = -230660695;
unsigned short var_27 = (unsigned short)35787;
unsigned int var_28 = 3600135115U;
short var_29 = (short)23213;
signed char arr_1 [19] ;
int arr_2 [19] ;
signed char arr_4 [19] ;
unsigned long long int arr_6 [19] [19] ;
short arr_10 [21] ;
signed char arr_11 [21] ;
unsigned short arr_12 [21] ;
int arr_14 [25] [25] ;
long long int arr_16 [25] ;
unsigned short arr_13 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -1107778171;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (signed char)-66;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 14476451860179744635ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (short)-16370;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (unsigned short)62613;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = 724698176;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = -2974263780412255188LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)58203;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
