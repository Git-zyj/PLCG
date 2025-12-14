#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38056;
unsigned long long int var_2 = 16200169591605991433ULL;
unsigned long long int var_3 = 4173610068051485980ULL;
signed char var_4 = (signed char)94;
unsigned short var_6 = (unsigned short)3085;
long long int var_7 = -7628497900089704626LL;
short var_10 = (short)9726;
unsigned long long int var_13 = 5842724273781632852ULL;
unsigned short var_14 = (unsigned short)18238;
int zero = 0;
short var_16 = (short)17269;
short var_17 = (short)-35;
unsigned int var_18 = 808478912U;
unsigned int var_19 = 3701581913U;
int var_20 = 1997493196;
unsigned int var_21 = 4348273U;
unsigned char arr_0 [13] ;
unsigned int arr_1 [13] ;
long long int arr_2 [13] ;
int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 2410622727U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1879869337881620821LL : 4454396774395059614LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1689794287 : -1939221109;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
