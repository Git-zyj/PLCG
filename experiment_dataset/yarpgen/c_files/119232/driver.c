#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19408;
unsigned int var_2 = 1226547142U;
unsigned int var_3 = 1730191037U;
long long int var_8 = -7130303553797511081LL;
unsigned long long int var_12 = 3720392343809429094ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)14;
unsigned long long int var_15 = 17926639218101143698ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
