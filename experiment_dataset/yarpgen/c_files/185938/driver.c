#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7814363148288530845ULL;
unsigned char var_5 = (unsigned char)2;
unsigned char var_6 = (unsigned char)155;
short var_8 = (short)13916;
unsigned short var_9 = (unsigned short)50159;
unsigned char var_10 = (unsigned char)223;
int zero = 0;
unsigned char var_17 = (unsigned char)5;
long long int var_18 = 8094175695394950725LL;
signed char var_19 = (signed char)-100;
short var_20 = (short)-4933;
unsigned long long int arr_0 [19] [19] ;
unsigned short arr_2 [19] ;
short arr_5 [19] ;
signed char arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 7247156483579741532ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)55952;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (short)-20326;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-116 : (signed char)11;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
