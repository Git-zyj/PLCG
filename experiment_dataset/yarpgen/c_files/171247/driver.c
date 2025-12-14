#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)13;
signed char var_2 = (signed char)-30;
signed char var_3 = (signed char)73;
signed char var_4 = (signed char)-122;
short var_5 = (short)-10124;
signed char var_6 = (signed char)-50;
int var_7 = 1094007160;
int var_9 = -2068266152;
short var_10 = (short)-15495;
int zero = 0;
short var_11 = (short)-27787;
int var_12 = 434886099;
short var_13 = (short)-29502;
int var_14 = 1580657670;
signed char var_15 = (signed char)-39;
signed char var_16 = (signed char)60;
short arr_1 [22] ;
signed char arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-21367;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (signed char)93;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
