#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)72;
unsigned long long int var_5 = 3495011007552829095ULL;
unsigned int var_10 = 2878038932U;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 106453895999802359ULL;
short var_14 = (short)-16671;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
