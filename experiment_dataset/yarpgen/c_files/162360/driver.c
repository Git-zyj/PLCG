#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)5922;
unsigned long long int var_2 = 10682966594938413076ULL;
short var_6 = (short)5358;
int var_10 = 2012023598;
unsigned long long int var_12 = 3103132836951396992ULL;
int zero = 0;
unsigned long long int var_17 = 9240482775068524815ULL;
long long int var_18 = 1666622490011602745LL;
unsigned short var_19 = (unsigned short)53870;
unsigned long long int var_20 = 6962257517711536243ULL;
unsigned char var_21 = (unsigned char)191;
unsigned long long int var_22 = 1681155469305797922ULL;
long long int var_23 = 5107010870453900682LL;
unsigned char arr_0 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)204;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
