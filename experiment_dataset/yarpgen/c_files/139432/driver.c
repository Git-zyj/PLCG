#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14576299552975157665ULL;
short var_1 = (short)25140;
short var_2 = (short)-29912;
signed char var_3 = (signed char)-100;
unsigned long long int var_4 = 14036661378973501066ULL;
unsigned int var_9 = 142049214U;
unsigned char var_15 = (unsigned char)160;
int zero = 0;
unsigned char var_18 = (unsigned char)85;
signed char var_19 = (signed char)92;
unsigned long long int var_20 = 6922747507513261599ULL;
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
