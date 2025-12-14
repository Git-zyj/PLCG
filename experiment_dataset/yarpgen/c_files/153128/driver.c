#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1563155563U;
unsigned char var_10 = (unsigned char)114;
unsigned char var_11 = (unsigned char)119;
unsigned long long int var_14 = 5340382842250917255ULL;
unsigned short var_16 = (unsigned short)63220;
int zero = 0;
signed char var_18 = (signed char)113;
long long int var_19 = 7281296566993310609LL;
long long int var_20 = 7473337923504480939LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
