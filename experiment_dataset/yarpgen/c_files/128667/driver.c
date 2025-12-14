#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)52485;
unsigned short var_5 = (unsigned short)27800;
unsigned short var_7 = (unsigned short)9683;
short var_8 = (short)-18247;
long long int var_9 = 4054028719178292996LL;
unsigned char var_12 = (unsigned char)32;
int zero = 0;
signed char var_13 = (signed char)-83;
unsigned short var_14 = (unsigned short)48424;
unsigned long long int var_15 = 8066847754496864202ULL;
short var_16 = (short)21607;
unsigned long long int var_17 = 2103194603078794347ULL;
unsigned short arr_0 [24] [24] ;
signed char arr_1 [24] ;
signed char arr_2 [24] ;
unsigned char arr_3 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)212;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)229;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
