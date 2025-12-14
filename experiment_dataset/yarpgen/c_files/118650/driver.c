#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)67;
unsigned char var_4 = (unsigned char)255;
unsigned int var_5 = 3284524851U;
unsigned long long int var_8 = 5241311170841212301ULL;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)230;
short var_11 = (short)-7203;
unsigned short var_12 = (unsigned short)36096;
int zero = 0;
unsigned char var_13 = (unsigned char)133;
short var_14 = (short)-21788;
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
