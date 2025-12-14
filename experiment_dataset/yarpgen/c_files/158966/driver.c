#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-24;
short var_2 = (short)-20322;
unsigned char var_3 = (unsigned char)232;
int var_4 = -2055401957;
unsigned long long int var_5 = 7077437155479409271ULL;
unsigned long long int var_6 = 11603054552796521313ULL;
int var_9 = 919237994;
signed char var_10 = (signed char)-75;
int var_11 = -1975821985;
int var_13 = 1618550561;
int zero = 0;
short var_17 = (short)-29523;
signed char var_18 = (signed char)93;
signed char var_19 = (signed char)60;
int var_20 = 1586819488;
unsigned char var_21 = (unsigned char)55;
long long int var_22 = 4442410686149320062LL;
unsigned short var_23 = (unsigned short)61978;
unsigned short var_24 = (unsigned short)43703;
unsigned char arr_0 [21] ;
signed char arr_2 [21] ;
short arr_3 [15] ;
long long int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)-1977;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -7630284779663198892LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
