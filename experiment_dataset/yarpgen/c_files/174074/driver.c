#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14407;
long long int var_3 = 1908701064831678533LL;
signed char var_4 = (signed char)-44;
signed char var_5 = (signed char)27;
long long int var_6 = 8195459712569233369LL;
long long int var_7 = 1983104009090635285LL;
signed char var_8 = (signed char)-109;
short var_9 = (short)3958;
unsigned long long int var_10 = 10953422997708768604ULL;
signed char var_11 = (signed char)-122;
int zero = 0;
int var_12 = -2032222377;
unsigned char var_13 = (unsigned char)61;
signed char var_14 = (signed char)-53;
unsigned short var_15 = (unsigned short)9689;
signed char var_16 = (signed char)-62;
long long int arr_6 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = -1513355801000963525LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
