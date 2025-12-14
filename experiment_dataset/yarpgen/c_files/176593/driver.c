#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 4337905132994944384ULL;
unsigned char var_8 = (unsigned char)138;
signed char var_9 = (signed char)-126;
long long int var_10 = 7428884410318044661LL;
short var_14 = (short)23891;
unsigned short var_15 = (unsigned short)38053;
int var_16 = -1467299842;
unsigned char var_18 = (unsigned char)94;
unsigned char var_19 = (unsigned char)239;
int zero = 0;
unsigned char var_20 = (unsigned char)221;
int var_21 = 12122470;
signed char var_22 = (signed char)49;
unsigned long long int var_23 = 13256638335487342897ULL;
unsigned long long int var_24 = 11243533249874299949ULL;
signed char var_25 = (signed char)-126;
int var_26 = -1338693600;
unsigned char arr_0 [22] [22] ;
unsigned char arr_1 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)154;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
