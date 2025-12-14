#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 770162163U;
unsigned char var_4 = (unsigned char)108;
long long int var_6 = -8086658287573657409LL;
_Bool var_10 = (_Bool)1;
long long int var_15 = 4119591887263796467LL;
int zero = 0;
signed char var_19 = (signed char)14;
long long int var_20 = 5858350337551561613LL;
long long int var_21 = 9208866000807597845LL;
short var_22 = (short)477;
unsigned char var_23 = (unsigned char)73;
unsigned long long int var_24 = 13680934217124973112ULL;
long long int var_25 = -4332978348648817867LL;
unsigned int arr_0 [15] ;
signed char arr_2 [15] ;
unsigned long long int arr_3 [17] ;
_Bool arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1975904706U : 144974602U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 11804177576597474992ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
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
