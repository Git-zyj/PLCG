#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10343;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 3920678506U;
unsigned char var_7 = (unsigned char)224;
unsigned int var_8 = 1353393699U;
int zero = 0;
long long int var_10 = -583609995821150604LL;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)65014;
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
