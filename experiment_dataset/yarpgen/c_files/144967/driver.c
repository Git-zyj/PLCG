#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13642023308491374813ULL;
_Bool var_1 = (_Bool)1;
unsigned char var_5 = (unsigned char)21;
unsigned int var_9 = 3471518911U;
int zero = 0;
long long int var_10 = -710557327560428419LL;
short var_11 = (short)-28744;
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
