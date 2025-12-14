#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)26;
unsigned long long int var_1 = 11509655292534276345ULL;
_Bool var_5 = (_Bool)1;
int var_6 = -1040423522;
long long int var_7 = 2370341977634006538LL;
long long int var_8 = -2369027367838946943LL;
short var_9 = (short)-14748;
int zero = 0;
unsigned long long int var_13 = 7436738804863596163ULL;
unsigned long long int var_14 = 2662657743192608397ULL;
unsigned short var_15 = (unsigned short)37600;
unsigned long long int var_16 = 2024966556624537450ULL;
short var_17 = (short)3918;
unsigned long long int var_18 = 534273247047511312ULL;
unsigned char var_19 = (unsigned char)69;
unsigned char var_20 = (unsigned char)184;
int var_21 = 1721147191;
unsigned int arr_2 [22] ;
unsigned short arr_7 [22] [22] [22] [22] ;
_Bool arr_11 [22] [22] [22] [22] [22] ;
unsigned char arr_14 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 2645665633U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)43133;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)192 : (unsigned char)253;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
