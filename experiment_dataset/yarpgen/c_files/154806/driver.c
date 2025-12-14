#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16848200555526803957ULL;
unsigned short var_5 = (unsigned short)21147;
unsigned char var_10 = (unsigned char)171;
signed char var_15 = (signed char)-66;
int zero = 0;
unsigned char var_16 = (unsigned char)220;
unsigned long long int var_17 = 3116818052811468227ULL;
short var_18 = (short)-14269;
signed char arr_0 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)66;
}

void checksum() {
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
