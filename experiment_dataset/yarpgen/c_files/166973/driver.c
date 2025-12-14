#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5823861938252418979LL;
long long int var_1 = -4323797454928434261LL;
unsigned short var_4 = (unsigned short)63512;
signed char var_8 = (signed char)5;
unsigned short var_10 = (unsigned short)46252;
unsigned char var_11 = (unsigned char)46;
signed char var_12 = (signed char)51;
int zero = 0;
unsigned int var_13 = 1422639911U;
signed char var_14 = (signed char)-59;
long long int var_15 = -8513621991495514987LL;
unsigned char var_16 = (unsigned char)127;
signed char var_17 = (signed char)-126;
long long int var_18 = 8439218439695076621LL;
unsigned char var_19 = (unsigned char)175;
long long int var_20 = 7016154515738492593LL;
unsigned short var_21 = (unsigned short)47743;
signed char var_22 = (signed char)-88;
long long int arr_1 [15] [15] ;
signed char arr_2 [15] ;
long long int arr_3 [16] [16] ;
unsigned short arr_5 [16] [16] ;
unsigned short arr_12 [16] [16] [16] [16] ;
signed char arr_8 [16] ;
signed char arr_13 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 4799015346773366520LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)-111;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? -8773895630718409504LL : 5818686991355337654LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)60619 : (unsigned short)35829;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)24195 : (unsigned short)21985;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)15 : (signed char)57;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-20 : (signed char)81;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
