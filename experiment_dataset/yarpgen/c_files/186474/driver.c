#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13021499502702065473ULL;
long long int var_6 = -3431943090822445491LL;
long long int var_9 = 8263331896949500641LL;
long long int var_12 = 2251810644750919913LL;
short var_13 = (short)-2448;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = -1395145798;
unsigned int var_16 = 287199560U;
unsigned short var_17 = (unsigned short)57149;
_Bool arr_0 [17] ;
unsigned char arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)176;
}

void checksum() {
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
