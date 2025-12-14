#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8835154687975900499LL;
unsigned char var_2 = (unsigned char)156;
unsigned char var_3 = (unsigned char)250;
unsigned char var_4 = (unsigned char)234;
unsigned char var_5 = (unsigned char)64;
long long int var_6 = -7414657743191715533LL;
long long int var_8 = -8956876350949541973LL;
unsigned char var_9 = (unsigned char)117;
unsigned char var_10 = (unsigned char)5;
unsigned char var_11 = (unsigned char)127;
unsigned char var_13 = (unsigned char)119;
long long int var_14 = 1766539560431616535LL;
unsigned char var_15 = (unsigned char)202;
long long int var_16 = -2821690207562265082LL;
int zero = 0;
long long int var_20 = -3730686493567175382LL;
unsigned char var_21 = (unsigned char)27;
unsigned char arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)242;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
