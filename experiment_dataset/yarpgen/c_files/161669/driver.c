#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1342332500U;
int var_2 = 1423679818;
unsigned char var_3 = (unsigned char)209;
unsigned char var_4 = (unsigned char)88;
short var_6 = (short)-18288;
unsigned int var_8 = 505794737U;
signed char var_9 = (signed char)84;
unsigned short var_11 = (unsigned short)51159;
short var_13 = (short)-10975;
int zero = 0;
unsigned int var_19 = 3900780865U;
short var_20 = (short)31921;
int var_21 = -508354502;
signed char var_22 = (signed char)-59;
unsigned int var_23 = 3729723190U;
signed char var_24 = (signed char)59;
unsigned int arr_1 [25] ;
signed char arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 3592450517U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (signed char)11;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
