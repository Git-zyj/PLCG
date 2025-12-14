#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)101;
short var_5 = (short)-18619;
unsigned char var_7 = (unsigned char)40;
short var_8 = (short)19381;
unsigned char var_9 = (unsigned char)95;
int zero = 0;
unsigned char var_10 = (unsigned char)105;
long long int var_11 = 4884125271285574672LL;
unsigned char var_12 = (unsigned char)194;
long long int var_13 = 5178336291271693849LL;
unsigned char var_14 = (unsigned char)81;
unsigned char var_15 = (unsigned char)196;
long long int var_16 = 1282797961225189504LL;
unsigned char arr_0 [10] ;
long long int arr_1 [10] [10] ;
short arr_4 [10] [10] ;
signed char arr_5 [10] [10] [10] [10] ;
unsigned long long int arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)131 : (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? -500759556075095422LL : -7951528509012625765LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)2661 : (short)-9157;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 16160593477245718105ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
