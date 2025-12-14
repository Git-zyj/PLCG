#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3692565855589806516LL;
unsigned char var_1 = (unsigned char)44;
unsigned int var_2 = 238983428U;
unsigned int var_3 = 2051199657U;
long long int var_4 = -5631761019827214577LL;
long long int var_5 = -7088716068477208901LL;
unsigned int var_6 = 653367966U;
unsigned char var_7 = (unsigned char)54;
unsigned int var_8 = 3748101895U;
long long int var_9 = 5251348197693905394LL;
int zero = 0;
unsigned char var_10 = (unsigned char)217;
long long int var_11 = 4828822904626984346LL;
unsigned char var_12 = (unsigned char)22;
unsigned char var_13 = (unsigned char)182;
long long int var_14 = 7722586705768796153LL;
unsigned int var_15 = 2430336018U;
unsigned int var_16 = 3716070711U;
unsigned char var_17 = (unsigned char)75;
unsigned int arr_0 [19] ;
unsigned char arr_1 [19] [19] ;
unsigned char arr_2 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 447690816U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)173;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
