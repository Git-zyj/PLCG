#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12210056787670071283ULL;
unsigned long long int var_3 = 7098768153226877900ULL;
signed char var_7 = (signed char)5;
signed char var_12 = (signed char)68;
signed char var_17 = (signed char)-2;
int zero = 0;
signed char var_18 = (signed char)60;
unsigned long long int var_19 = 4920667400051834624ULL;
signed char var_20 = (signed char)17;
unsigned long long int var_21 = 14013273954066665272ULL;
unsigned long long int var_22 = 14620843557754844613ULL;
signed char var_23 = (signed char)-99;
unsigned long long int var_24 = 7730975772884165909ULL;
signed char var_25 = (signed char)30;
unsigned long long int arr_0 [11] ;
signed char arr_1 [11] ;
unsigned long long int arr_4 [22] [22] ;
signed char arr_5 [22] [22] ;
unsigned long long int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 11255061330451331328ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)27;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 401790419156115188ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 12049721443841918978ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
