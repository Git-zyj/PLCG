#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)29707;
unsigned char var_4 = (unsigned char)76;
unsigned char var_6 = (unsigned char)12;
unsigned short var_7 = (unsigned short)41405;
long long int var_8 = 1448942111846569234LL;
unsigned int var_9 = 477945107U;
unsigned int var_11 = 2475807605U;
int zero = 0;
int var_15 = 1235621549;
unsigned short var_16 = (unsigned short)40158;
short var_17 = (short)-5180;
unsigned char arr_0 [22] ;
int arr_1 [22] ;
long long int arr_2 [22] ;
unsigned long long int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -1196943074;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 5180576034074028759LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 17234336792736621142ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
