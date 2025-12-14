#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11850357585875926477ULL;
unsigned short var_2 = (unsigned short)9011;
long long int var_5 = -6401573325410652416LL;
short var_9 = (short)-28449;
unsigned short var_11 = (unsigned short)48515;
short var_12 = (short)1064;
int zero = 0;
long long int var_14 = -1577490212955101665LL;
int var_15 = -90530684;
unsigned char var_16 = (unsigned char)234;
signed char var_17 = (signed char)-74;
unsigned long long int var_18 = 6453678197697915698ULL;
unsigned char arr_0 [22] ;
signed char arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)215 : (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)74;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
