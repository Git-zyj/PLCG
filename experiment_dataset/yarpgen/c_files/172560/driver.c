#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2701578976305029202LL;
unsigned long long int var_3 = 1496726180910316048ULL;
signed char var_5 = (signed char)-82;
unsigned short var_6 = (unsigned short)13024;
unsigned char var_7 = (unsigned char)150;
unsigned long long int var_8 = 7517231906365138751ULL;
unsigned char var_9 = (unsigned char)38;
long long int var_11 = -4271030600450496832LL;
unsigned short var_12 = (unsigned short)59032;
int zero = 0;
signed char var_13 = (signed char)63;
int var_14 = 1821976850;
int var_15 = 1757564145;
long long int var_16 = -4534139501125904216LL;
unsigned char arr_0 [13] [13] ;
int arr_1 [13] [13] ;
long long int arr_3 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)111;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 313662329;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -6561458983544944516LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
