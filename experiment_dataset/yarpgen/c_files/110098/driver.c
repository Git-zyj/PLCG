#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5321080621113252459LL;
long long int var_3 = -4802434411071152642LL;
unsigned int var_5 = 3321467792U;
long long int var_6 = 3419744377421824736LL;
short var_7 = (short)10047;
long long int var_8 = 5488922254124925854LL;
short var_9 = (short)-29317;
unsigned short var_10 = (unsigned short)23683;
unsigned char var_11 = (unsigned char)66;
unsigned int var_12 = 3819564701U;
unsigned int var_13 = 485496122U;
int zero = 0;
int var_15 = -1404788142;
int var_16 = 1126057457;
int var_17 = -1942852385;
long long int var_18 = 1179955727171259316LL;
long long int var_19 = -6817664410096847205LL;
int var_20 = -1255844212;
long long int var_21 = 3054427684778479557LL;
signed char var_22 = (signed char)114;
long long int arr_0 [10] ;
unsigned char arr_1 [10] ;
signed char arr_6 [10] [10] [10] ;
signed char arr_9 [10] [10] [10] ;
unsigned char arr_10 [10] [10] ;
int arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 1628879981586700929LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)-32;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = -2023023335;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
