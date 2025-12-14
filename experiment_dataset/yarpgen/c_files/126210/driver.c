#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18283649397763177443ULL;
_Bool var_2 = (_Bool)1;
int var_5 = -1699880654;
unsigned long long int var_6 = 9540451266814102699ULL;
unsigned short var_8 = (unsigned short)18157;
unsigned short var_9 = (unsigned short)32557;
int zero = 0;
unsigned short var_10 = (unsigned short)41414;
unsigned int var_11 = 913655074U;
int var_12 = -108417937;
unsigned long long int var_13 = 18314711242967137635ULL;
unsigned short arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)8030 : (unsigned short)7061;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
