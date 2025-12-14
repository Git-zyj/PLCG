#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -7100352219153517218LL;
unsigned long long int var_8 = 3869792280654860030ULL;
unsigned short var_10 = (unsigned short)51204;
unsigned long long int var_12 = 10812496226987701560ULL;
signed char var_13 = (signed char)91;
unsigned long long int var_15 = 14512327782030462684ULL;
int zero = 0;
signed char var_17 = (signed char)-46;
unsigned short var_18 = (unsigned short)12789;
unsigned char var_19 = (unsigned char)223;
long long int arr_2 [21] ;
unsigned long long int arr_3 [21] ;
long long int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -445430098131920157LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 10641885543974012995ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = -8575977667293436646LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
