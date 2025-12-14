#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)162;
unsigned int var_2 = 3136967232U;
unsigned char var_4 = (unsigned char)240;
short var_8 = (short)11052;
int zero = 0;
unsigned int var_12 = 1581801900U;
unsigned short var_13 = (unsigned short)53203;
unsigned int var_14 = 3276990309U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
