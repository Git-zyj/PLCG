#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14101107793827950073ULL;
long long int var_4 = 4947631571829992385LL;
int var_6 = 971299676;
short var_7 = (short)-25232;
signed char var_9 = (signed char)-80;
short var_10 = (short)5881;
int zero = 0;
unsigned short var_14 = (unsigned short)6269;
unsigned char var_15 = (unsigned char)212;
int var_16 = 1979540749;
unsigned char var_17 = (unsigned char)124;
unsigned short var_18 = (unsigned short)60462;
_Bool var_19 = (_Bool)1;
long long int var_20 = 1142518146923667067LL;
_Bool var_21 = (_Bool)0;
unsigned int arr_1 [25] ;
unsigned long long int arr_2 [25] ;
unsigned char arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 993661508U : 776036267U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 6318262208652382893ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)107 : (unsigned char)226;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
