#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1504509137U;
unsigned int var_2 = 4116476718U;
unsigned int var_4 = 4138991897U;
short var_9 = (short)16677;
long long int var_12 = 3195008845325356569LL;
int zero = 0;
signed char var_16 = (signed char)110;
unsigned char var_17 = (unsigned char)78;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
