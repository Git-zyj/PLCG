#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-10;
unsigned char var_5 = (unsigned char)78;
unsigned long long int var_6 = 2018559791708625170ULL;
unsigned int var_7 = 3545280388U;
unsigned char var_9 = (unsigned char)10;
unsigned char var_14 = (unsigned char)130;
int zero = 0;
unsigned char var_16 = (unsigned char)128;
unsigned char var_17 = (unsigned char)160;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
