#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26216;
long long int var_4 = -5907639957672435025LL;
unsigned char var_9 = (unsigned char)231;
short var_10 = (short)7922;
long long int var_11 = 3491841988402076876LL;
unsigned char var_12 = (unsigned char)162;
unsigned char var_14 = (unsigned char)115;
unsigned short var_15 = (unsigned short)39131;
short var_16 = (short)-1312;
int zero = 0;
long long int var_17 = 2686851134935097173LL;
short var_18 = (short)-26649;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)102;
_Bool var_21 = (_Bool)1;
unsigned short arr_0 [17] ;
short arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)13244;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)-63;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
