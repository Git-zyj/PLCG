#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)207;
long long int var_1 = 4420569839780671089LL;
unsigned char var_2 = (unsigned char)102;
unsigned char var_3 = (unsigned char)144;
unsigned char var_6 = (unsigned char)135;
unsigned short var_7 = (unsigned short)21700;
int var_8 = 1322395388;
unsigned int var_9 = 1421990617U;
int zero = 0;
long long int var_11 = 8501410946056839293LL;
long long int var_12 = -2922333018399178443LL;
int var_13 = -1694773732;
int var_14 = -96006837;
unsigned short var_15 = (unsigned short)50553;
int var_16 = 1452724853;
int var_17 = -1931261033;
unsigned char arr_0 [20] ;
unsigned char arr_1 [20] [20] ;
signed char arr_4 [25] ;
int arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-103 : (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -1804514533;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
