#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)89;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 3811314106U;
unsigned long long int var_4 = 3685052641498165472ULL;
unsigned char var_5 = (unsigned char)204;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)145;
short var_10 = (short)20194;
unsigned char var_11 = (unsigned char)181;
int var_14 = -127212796;
signed char var_15 = (signed char)44;
unsigned char var_16 = (unsigned char)164;
int zero = 0;
int var_17 = 15063568;
unsigned char var_18 = (unsigned char)212;
int var_19 = -482769538;
int var_20 = 601999137;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
int var_23 = -1463608062;
unsigned short var_24 = (unsigned short)31212;
_Bool arr_0 [11] ;
unsigned char arr_1 [11] ;
unsigned int arr_3 [17] ;
int arr_10 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 4073344384U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = -685278842;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
