#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-5506;
unsigned int var_9 = 2362715295U;
unsigned long long int var_13 = 10541135548623824661ULL;
int zero = 0;
short var_15 = (short)31742;
long long int var_16 = -1581659424144934519LL;
unsigned char var_17 = (unsigned char)200;
short var_18 = (short)2203;
short var_19 = (short)-27687;
unsigned long long int var_20 = 14569213163527577156ULL;
signed char var_21 = (signed char)98;
signed char arr_3 [25] ;
unsigned long long int arr_4 [25] ;
signed char arr_5 [25] [25] ;
unsigned char arr_8 [23] [23] ;
unsigned short arr_13 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (signed char)-104;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 8080842375851666863ULL : 16513052922300298617ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-17;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)57544 : (unsigned short)57484;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
