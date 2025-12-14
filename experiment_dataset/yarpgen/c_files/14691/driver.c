#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-31759;
_Bool var_4 = (_Bool)0;
signed char var_8 = (signed char)6;
int zero = 0;
unsigned short var_10 = (unsigned short)4674;
int var_11 = 991915806;
signed char var_12 = (signed char)11;
unsigned int var_13 = 1822768381U;
_Bool var_14 = (_Bool)0;
long long int var_15 = 8524800640315034992LL;
unsigned int var_16 = 3051176036U;
unsigned char var_17 = (unsigned char)214;
unsigned char var_18 = (unsigned char)209;
unsigned int arr_0 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1239892108U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
