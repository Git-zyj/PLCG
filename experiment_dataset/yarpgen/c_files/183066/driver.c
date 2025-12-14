#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3510526844U;
long long int var_1 = -1429441930457584622LL;
unsigned short var_2 = (unsigned short)16546;
int var_4 = -307388447;
unsigned int var_6 = 954848148U;
unsigned short var_8 = (unsigned short)40015;
signed char var_9 = (signed char)8;
unsigned int var_10 = 4253742241U;
int zero = 0;
short var_11 = (short)-20219;
short var_12 = (short)-18395;
int var_13 = -1865627983;
unsigned char var_14 = (unsigned char)205;
short var_15 = (short)-14172;
long long int arr_9 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 7913898515135449210LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
