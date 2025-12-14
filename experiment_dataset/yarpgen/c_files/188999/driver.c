#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 68141935;
long long int var_2 = -9004433822684860655LL;
int var_3 = -1699245029;
short var_7 = (short)22124;
unsigned short var_10 = (unsigned short)41896;
long long int var_11 = -6864241460906346115LL;
unsigned char var_12 = (unsigned char)30;
int var_13 = -1680441447;
int var_16 = -790072649;
int zero = 0;
unsigned short var_17 = (unsigned short)9593;
long long int var_18 = -4983894693609410815LL;
unsigned short var_19 = (unsigned short)15562;
unsigned long long int var_20 = 2119225817703873065ULL;
short var_21 = (short)17775;
unsigned int var_22 = 3603221978U;
short var_23 = (short)28771;
unsigned long long int var_24 = 16632485174656872872ULL;
unsigned char var_25 = (unsigned char)190;
signed char arr_0 [16] [16] ;
_Bool arr_1 [16] [16] ;
int arr_2 [16] ;
int arr_8 [16] [16] ;
int arr_11 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)100;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -236726614;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = -1279049072;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = 1051902879;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
