#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13974930926080421287ULL;
short var_5 = (short)16301;
long long int var_7 = 5886945892303490580LL;
signed char var_8 = (signed char)30;
short var_11 = (short)-10171;
unsigned char var_13 = (unsigned char)216;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
unsigned char var_18 = (unsigned char)217;
short var_19 = (short)-25000;
int zero = 0;
unsigned long long int var_20 = 6457710589891364451ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
