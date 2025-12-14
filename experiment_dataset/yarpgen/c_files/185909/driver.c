#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)127;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
short var_4 = (short)5206;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)145;
unsigned char var_9 = (unsigned char)255;
unsigned long long int var_10 = 12158622059738833704ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)250;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2948400696U;
long long int var_15 = 7694949244532433904LL;
short var_16 = (short)16214;
unsigned char var_17 = (unsigned char)135;
signed char arr_0 [13] ;
unsigned short arr_2 [13] ;
long long int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (signed char)59;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned short)53047;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 4295503096032976155LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
