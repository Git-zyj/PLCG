#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1589905624;
unsigned char var_3 = (unsigned char)45;
unsigned char var_4 = (unsigned char)139;
unsigned char var_5 = (unsigned char)186;
unsigned char var_7 = (unsigned char)24;
unsigned short var_8 = (unsigned short)59267;
unsigned long long int var_10 = 14937307534195933776ULL;
unsigned char var_12 = (unsigned char)248;
int zero = 0;
int var_13 = 821776588;
unsigned long long int var_14 = 11244597985538395414ULL;
signed char var_15 = (signed char)-62;
unsigned int var_16 = 2266499007U;
int var_17 = 1312243420;
unsigned short var_18 = (unsigned short)61131;
long long int var_19 = -7987957811223174567LL;
unsigned short arr_0 [17] ;
unsigned long long int arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)64424;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 9575756423753032528ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
