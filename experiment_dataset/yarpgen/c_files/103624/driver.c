#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8042257190792713479LL;
unsigned int var_4 = 2869187967U;
unsigned int var_5 = 902424086U;
unsigned short var_6 = (unsigned short)45333;
unsigned char var_7 = (unsigned char)133;
unsigned int var_11 = 3893654752U;
int zero = 0;
unsigned short var_12 = (unsigned short)29148;
short var_13 = (short)31833;
unsigned int var_14 = 558961136U;
_Bool arr_3 [23] ;
long long int arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -50276604577679145LL : 4263494825236689574LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
