#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4165160188214972570LL;
unsigned long long int var_1 = 7247139889465945235ULL;
long long int var_2 = -2457076050165884998LL;
signed char var_5 = (signed char)3;
unsigned short var_6 = (unsigned short)54868;
unsigned int var_7 = 3296725827U;
unsigned short var_8 = (unsigned short)10096;
short var_9 = (short)1822;
unsigned short var_10 = (unsigned short)51025;
int zero = 0;
unsigned char var_11 = (unsigned char)49;
long long int var_12 = -7784838334631266600LL;
unsigned char var_13 = (unsigned char)140;
unsigned short var_14 = (unsigned short)64816;
short var_15 = (short)-15231;
signed char var_16 = (signed char)-63;
short var_17 = (short)23808;
unsigned long long int arr_3 [10] ;
short arr_8 [10] [10] ;
signed char arr_9 [10] ;
unsigned char arr_11 [10] [10] [10] [10] ;
signed char arr_6 [10] ;
signed char arr_12 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 11922410476136807462ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-22481 : (short)24962;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (signed char)-105;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned char)250;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (signed char)39;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (signed char)-103;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
