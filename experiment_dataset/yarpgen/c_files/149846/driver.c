#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -794385860;
unsigned int var_1 = 441625856U;
unsigned char var_2 = (unsigned char)73;
_Bool var_4 = (_Bool)1;
short var_6 = (short)-25122;
signed char var_7 = (signed char)-18;
long long int var_8 = -6551299569655904758LL;
unsigned long long int var_9 = 4861168840161856204ULL;
int zero = 0;
unsigned long long int var_12 = 8326383222634750337ULL;
signed char var_13 = (signed char)17;
void init() {
}

void checksum() {
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
