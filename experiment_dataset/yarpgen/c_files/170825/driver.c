#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)24;
signed char var_3 = (signed char)-35;
unsigned short var_4 = (unsigned short)51348;
unsigned char var_7 = (unsigned char)207;
int var_9 = -172014864;
long long int var_10 = 1579069123740602435LL;
unsigned char var_11 = (unsigned char)150;
unsigned int var_16 = 1763934425U;
int zero = 0;
int var_20 = -1620911500;
unsigned int var_21 = 2014570193U;
unsigned int var_22 = 2820831201U;
int var_23 = 1500385547;
unsigned int var_24 = 2377428572U;
signed char var_25 = (signed char)93;
int var_26 = 1297883155;
signed char arr_1 [17] ;
long long int arr_2 [17] ;
unsigned char arr_3 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -6737908572146728148LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)236;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
