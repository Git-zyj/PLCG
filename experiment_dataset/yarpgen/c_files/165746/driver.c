#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2017860297;
unsigned char var_2 = (unsigned char)38;
short var_4 = (short)-24291;
unsigned int var_5 = 1951448504U;
unsigned char var_9 = (unsigned char)49;
unsigned short var_10 = (unsigned short)36684;
unsigned int var_11 = 1764626817U;
int zero = 0;
unsigned char var_17 = (unsigned char)159;
unsigned char var_18 = (unsigned char)216;
unsigned char var_19 = (unsigned char)131;
signed char var_20 = (signed char)76;
unsigned int var_21 = 2688412178U;
short var_22 = (short)-20005;
unsigned long long int arr_2 [22] ;
unsigned int arr_5 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 9962559562918960567ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 3936956522U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
