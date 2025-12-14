#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)161;
int var_1 = -1795561963;
signed char var_3 = (signed char)12;
unsigned int var_7 = 2484815501U;
_Bool var_8 = (_Bool)0;
int zero = 0;
int var_10 = 1028620413;
unsigned short var_11 = (unsigned short)30268;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
