#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31871;
unsigned int var_1 = 2697993845U;
unsigned long long int var_2 = 2002405986152027558ULL;
signed char var_3 = (signed char)-61;
int var_5 = -445116683;
long long int var_6 = -109967684539092542LL;
unsigned short var_7 = (unsigned short)36157;
unsigned char var_9 = (unsigned char)241;
long long int var_10 = 4172864998431166762LL;
int var_11 = -244488156;
unsigned char var_12 = (unsigned char)139;
int zero = 0;
unsigned int var_13 = 964092629U;
int var_14 = -1352152039;
signed char var_15 = (signed char)63;
unsigned int var_16 = 188171937U;
unsigned char var_17 = (unsigned char)18;
unsigned long long int var_18 = 11561537941776458247ULL;
_Bool arr_0 [17] ;
_Bool arr_1 [17] ;
unsigned short arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned short)54413;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
