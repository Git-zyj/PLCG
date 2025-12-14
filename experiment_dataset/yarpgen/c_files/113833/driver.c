#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)154;
unsigned short var_1 = (unsigned short)22868;
unsigned long long int var_2 = 17454197195568993660ULL;
unsigned char var_3 = (unsigned char)134;
unsigned long long int var_4 = 9940931029588641697ULL;
unsigned short var_5 = (unsigned short)25207;
unsigned long long int var_6 = 9852112322173940809ULL;
unsigned char var_7 = (unsigned char)232;
long long int var_8 = -7198084148920774714LL;
unsigned short var_9 = (unsigned short)39304;
unsigned char var_11 = (unsigned char)3;
int var_13 = -437240931;
unsigned long long int var_14 = 8144019295757702866ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)13189;
unsigned char var_16 = (unsigned char)88;
unsigned long long int var_17 = 12653041516950695351ULL;
long long int var_18 = 6516637795837969490LL;
unsigned short var_19 = (unsigned short)2994;
unsigned char var_20 = (unsigned char)247;
long long int arr_0 [19] ;
unsigned short arr_3 [19] [19] ;
signed char arr_4 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 8917291925085746398LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)14744;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-106;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
