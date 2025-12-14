#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)57142;
unsigned int var_7 = 2677808429U;
short var_8 = (short)-29662;
long long int var_9 = -2405361724532552644LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 14828394185932240125ULL;
short var_14 = (short)6110;
short var_15 = (short)24827;
unsigned char var_16 = (unsigned char)88;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
