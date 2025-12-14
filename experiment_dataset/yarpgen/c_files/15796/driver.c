#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)238;
short var_1 = (short)28029;
unsigned int var_2 = 4109884359U;
int var_4 = 20318545;
signed char var_7 = (signed char)94;
int var_8 = -326725510;
int var_12 = 1327925081;
unsigned short var_13 = (unsigned short)19129;
int zero = 0;
unsigned short var_15 = (unsigned short)3507;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
int arr_0 [13] ;
unsigned short arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1313052407;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)56680;
}

void checksum() {
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
