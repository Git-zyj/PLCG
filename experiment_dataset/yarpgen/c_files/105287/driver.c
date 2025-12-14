#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10662043707199441661ULL;
unsigned char var_2 = (unsigned char)69;
unsigned short var_4 = (unsigned short)20653;
unsigned long long int var_9 = 1139826138948689397ULL;
int zero = 0;
unsigned long long int var_13 = 5989822047295363070ULL;
unsigned short var_14 = (unsigned short)20937;
int var_15 = -2120164097;
short var_16 = (short)-3854;
unsigned char var_17 = (unsigned char)12;
int var_18 = -2127519032;
signed char var_19 = (signed char)-63;
long long int arr_1 [20] ;
signed char arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 2525614256187685899LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)60;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
