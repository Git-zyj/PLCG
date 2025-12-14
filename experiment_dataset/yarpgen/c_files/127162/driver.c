#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)92;
unsigned char var_5 = (unsigned char)106;
short var_9 = (short)18088;
int var_12 = 247835915;
short var_14 = (short)-22217;
int zero = 0;
unsigned long long int var_16 = 8492639481949429914ULL;
_Bool var_17 = (_Bool)1;
short var_18 = (short)24545;
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
