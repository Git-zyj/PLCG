#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1312938245U;
_Bool var_1 = (_Bool)1;
short var_2 = (short)26538;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 3569096614U;
unsigned short var_9 = (unsigned short)63869;
int zero = 0;
long long int var_10 = -9107599965620095250LL;
signed char var_11 = (signed char)34;
unsigned long long int var_12 = 15150109525784189424ULL;
unsigned char var_13 = (unsigned char)70;
unsigned char arr_1 [14] [14] ;
int arr_2 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)133 : (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 2047116421;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
