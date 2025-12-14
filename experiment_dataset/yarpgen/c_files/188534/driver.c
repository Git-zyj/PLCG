#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4573823682722347179LL;
signed char var_2 = (signed char)64;
unsigned short var_3 = (unsigned short)37300;
unsigned char var_4 = (unsigned char)7;
signed char var_7 = (signed char)-46;
signed char var_8 = (signed char)-58;
unsigned char var_13 = (unsigned char)201;
int zero = 0;
unsigned int var_16 = 1581300733U;
signed char var_17 = (signed char)-89;
long long int var_18 = -665806249190260017LL;
unsigned short var_19 = (unsigned short)16482;
int var_20 = 1679355756;
long long int var_21 = 3178230376134407570LL;
unsigned long long int arr_0 [22] ;
unsigned int arr_1 [22] ;
signed char arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 10819708886667656285ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 240555918U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)102;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
