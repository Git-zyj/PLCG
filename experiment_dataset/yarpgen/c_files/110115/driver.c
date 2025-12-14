#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)9;
int var_1 = -1343533331;
_Bool var_2 = (_Bool)0;
int var_3 = 930871364;
unsigned long long int var_4 = 7034633183979252406ULL;
unsigned long long int var_5 = 17315550285111118332ULL;
unsigned short var_6 = (unsigned short)54632;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)16146;
unsigned char var_12 = (unsigned char)28;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)50331;
unsigned short var_15 = (unsigned short)31721;
unsigned char var_16 = (unsigned char)232;
signed char var_17 = (signed char)55;
signed char arr_0 [14] ;
unsigned short arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)14964;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
