#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3963626712358899053LL;
signed char var_2 = (signed char)12;
_Bool var_3 = (_Bool)1;
long long int var_4 = -6092160461251889153LL;
unsigned char var_5 = (unsigned char)17;
unsigned char var_8 = (unsigned char)196;
signed char var_9 = (signed char)-123;
long long int var_10 = -4474422579686216114LL;
short var_12 = (short)-7190;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 1939433174124296561ULL;
unsigned char var_15 = (unsigned char)219;
unsigned int var_16 = 1432617803U;
unsigned char var_17 = (unsigned char)43;
unsigned char var_18 = (unsigned char)4;
unsigned char var_19 = (unsigned char)184;
signed char var_20 = (signed char)-97;
signed char arr_0 [12] ;
short arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (short)-16382;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
