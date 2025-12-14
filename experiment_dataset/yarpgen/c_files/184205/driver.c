#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63923;
unsigned short var_1 = (unsigned short)27434;
unsigned short var_2 = (unsigned short)4148;
unsigned short var_4 = (unsigned short)19520;
unsigned short var_5 = (unsigned short)7645;
unsigned short var_7 = (unsigned short)39202;
unsigned short var_9 = (unsigned short)51858;
unsigned short var_11 = (unsigned short)31486;
unsigned short var_12 = (unsigned short)24374;
unsigned short var_13 = (unsigned short)26789;
unsigned short var_14 = (unsigned short)63975;
unsigned short var_15 = (unsigned short)23913;
int zero = 0;
unsigned short var_16 = (unsigned short)56815;
unsigned short var_17 = (unsigned short)45654;
unsigned short var_18 = (unsigned short)13195;
unsigned short var_19 = (unsigned short)28432;
unsigned short var_20 = (unsigned short)64801;
unsigned short var_21 = (unsigned short)40957;
unsigned short var_22 = (unsigned short)15813;
unsigned short var_23 = (unsigned short)5832;
unsigned short arr_0 [15] [15] ;
unsigned short arr_2 [15] ;
unsigned short arr_6 [15] [15] ;
unsigned short arr_4 [15] [15] ;
unsigned short arr_8 [15] ;
unsigned short arr_15 [15] [15] ;
unsigned short arr_16 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)37928;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)40424;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)22488 : (unsigned short)50012;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)37763;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)8874 : (unsigned short)5537;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)58804;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned short)32490;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
