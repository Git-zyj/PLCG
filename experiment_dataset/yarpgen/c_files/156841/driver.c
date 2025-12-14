#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)25350;
int var_3 = 1123571279;
unsigned short var_4 = (unsigned short)30193;
long long int var_6 = -9191110421513656579LL;
int var_7 = -1633986960;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int var_10 = 2101464214;
int var_11 = -1307472742;
unsigned short var_12 = (unsigned short)12982;
unsigned int var_13 = 2470727355U;
unsigned short var_14 = (unsigned short)46210;
int var_16 = -1518391308;
int zero = 0;
unsigned int var_19 = 1011878903U;
long long int var_20 = -3882808187782504273LL;
long long int var_21 = -3843381868482555598LL;
unsigned long long int var_22 = 16764486826244708691ULL;
signed char var_23 = (signed char)2;
_Bool var_24 = (_Bool)0;
unsigned char var_25 = (unsigned char)78;
signed char var_26 = (signed char)44;
signed char var_27 = (signed char)51;
unsigned short var_28 = (unsigned short)49501;
int var_29 = -25742086;
long long int arr_0 [22] ;
short arr_1 [22] ;
short arr_3 [22] [22] ;
unsigned long long int arr_14 [22] [22] [22] [22] ;
_Bool arr_2 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -6039560647999087080LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-23334;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (short)8639;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 11119504396696959579ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
