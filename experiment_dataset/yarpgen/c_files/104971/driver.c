#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1050522229008488518ULL;
short var_1 = (short)-20376;
unsigned short var_7 = (unsigned short)38239;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned char var_10 = (unsigned char)78;
long long int var_11 = -2516886450888265318LL;
unsigned int var_12 = 187622719U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
