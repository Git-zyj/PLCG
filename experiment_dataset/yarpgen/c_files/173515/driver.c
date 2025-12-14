#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5293;
unsigned char var_2 = (unsigned char)222;
_Bool var_3 = (_Bool)1;
long long int var_4 = -5453926951846293049LL;
unsigned int var_5 = 409457142U;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned int var_11 = 448940682U;
unsigned char var_12 = (unsigned char)128;
int zero = 0;
long long int var_14 = -2963880256066688172LL;
signed char var_15 = (signed char)48;
unsigned char var_16 = (unsigned char)207;
unsigned short var_17 = (unsigned short)47848;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
