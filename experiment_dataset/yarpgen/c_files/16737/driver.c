#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10988;
unsigned long long int var_4 = 13694876722776155629ULL;
unsigned long long int var_5 = 12116737437737248779ULL;
long long int var_6 = -6530812816408414578LL;
long long int var_7 = -685742947386811051LL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_11 = 10406987301290682194ULL;
int zero = 0;
unsigned long long int var_15 = 11108885276834337348ULL;
unsigned long long int var_16 = 3304605776923709807ULL;
unsigned long long int var_17 = 5771469777458680466ULL;
int var_18 = 867256428;
unsigned long long int var_19 = 3127752387415833215ULL;
unsigned short var_20 = (unsigned short)92;
unsigned char var_21 = (unsigned char)206;
signed char arr_0 [11] ;
unsigned char arr_1 [11] ;
short arr_4 [17] ;
int arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (short)-10419;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = -1242179984;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
