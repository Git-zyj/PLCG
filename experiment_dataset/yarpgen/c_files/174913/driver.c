#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-72;
unsigned int var_2 = 2809314820U;
unsigned short var_3 = (unsigned short)57735;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)62;
int var_12 = 1323051032;
int zero = 0;
unsigned long long int var_14 = 2763974727461780837ULL;
short var_15 = (short)-6767;
int var_16 = 163008318;
unsigned long long int var_17 = 11685529590191830455ULL;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 19439420U;
unsigned int var_20 = 2358987947U;
unsigned char var_21 = (unsigned char)167;
unsigned long long int var_22 = 17954482883664073360ULL;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 7534243904214028842ULL;
signed char var_25 = (signed char)48;
unsigned int var_26 = 241863183U;
int var_27 = -844914161;
unsigned int var_28 = 964518687U;
int var_29 = -1444343829;
_Bool var_30 = (_Bool)0;
unsigned int var_31 = 269317873U;
long long int var_32 = -625004597099760132LL;
unsigned char arr_3 [16] [16] ;
_Bool arr_6 [25] ;
unsigned char arr_7 [25] [25] ;
unsigned char arr_8 [25] ;
unsigned int arr_17 [25] ;
unsigned int arr_19 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = 1490783008U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 3816259218U : 3986331937U;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
