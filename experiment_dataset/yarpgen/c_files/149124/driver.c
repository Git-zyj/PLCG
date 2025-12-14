#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1293553802;
unsigned char var_1 = (unsigned char)2;
int var_2 = -74745134;
int var_4 = -1280037347;
long long int var_5 = 2015649838110757505LL;
unsigned long long int var_6 = 16463428875431784114ULL;
unsigned char var_7 = (unsigned char)14;
int var_10 = -547199134;
unsigned char var_13 = (unsigned char)234;
unsigned char var_14 = (unsigned char)133;
int var_15 = -901525331;
int zero = 0;
unsigned char var_17 = (unsigned char)22;
long long int var_18 = 5677981466530207281LL;
unsigned long long int var_19 = 828838481040212367ULL;
long long int var_20 = 8646898851076155411LL;
long long int var_21 = -912251397701805726LL;
unsigned char arr_0 [17] ;
unsigned char arr_1 [17] [17] ;
unsigned long long int arr_2 [17] [17] ;
long long int arr_3 [17] [17] ;
int arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)248 : (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 10174135275615955329ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? -4562215074950437053LL : 7132290031633662228LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 681968499 : 219758402;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
