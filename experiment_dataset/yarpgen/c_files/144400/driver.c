#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 971596768;
unsigned short var_1 = (unsigned short)9858;
unsigned char var_2 = (unsigned char)235;
unsigned int var_3 = 1525447628U;
long long int var_4 = -7227306427944850527LL;
int var_5 = 67722341;
unsigned char var_6 = (unsigned char)62;
long long int var_7 = -8720463436557155208LL;
int zero = 0;
short var_10 = (short)13949;
unsigned short var_11 = (unsigned short)34337;
unsigned char var_12 = (unsigned char)0;
short var_13 = (short)-20666;
long long int var_14 = -2216632243911044624LL;
unsigned char var_15 = (unsigned char)10;
unsigned int arr_1 [16] [16] ;
unsigned long long int arr_2 [16] [16] [16] ;
signed char arr_3 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 4164385737U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 5763171418220909160ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)-6;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
