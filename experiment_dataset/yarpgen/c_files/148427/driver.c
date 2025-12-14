#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2433220349880801265LL;
unsigned long long int var_2 = 9600984242111033947ULL;
int var_3 = -78466620;
signed char var_4 = (signed char)23;
unsigned char var_5 = (unsigned char)150;
unsigned long long int var_6 = 12824489829177387201ULL;
unsigned short var_7 = (unsigned short)58087;
unsigned short var_8 = (unsigned short)59491;
_Bool var_9 = (_Bool)0;
int var_12 = 2085976539;
unsigned char var_14 = (unsigned char)32;
long long int var_15 = 7625732575433577302LL;
unsigned short var_16 = (unsigned short)17150;
int zero = 0;
long long int var_17 = -9087431297635099548LL;
long long int var_18 = -8849598415308073155LL;
unsigned char var_19 = (unsigned char)78;
long long int var_20 = 1945207494306736631LL;
unsigned char var_21 = (unsigned char)63;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
