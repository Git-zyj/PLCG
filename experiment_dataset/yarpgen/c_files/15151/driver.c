#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18092;
long long int var_4 = -4243649528100747186LL;
unsigned long long int var_5 = 16613934518381757508ULL;
unsigned short var_8 = (unsigned short)14831;
short var_12 = (short)26966;
int zero = 0;
unsigned char var_14 = (unsigned char)63;
short var_15 = (short)-898;
unsigned int var_16 = 4163658046U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
