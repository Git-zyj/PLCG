#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 528869380U;
unsigned long long int var_1 = 10050596140166051372ULL;
long long int var_3 = 2949221329120950818LL;
unsigned long long int var_4 = 5494631752262522080ULL;
int var_5 = -778362069;
int var_6 = 1249645501;
unsigned long long int var_7 = 9980898754833807274ULL;
signed char var_8 = (signed char)-18;
unsigned short var_10 = (unsigned short)39955;
int zero = 0;
signed char var_11 = (signed char)34;
unsigned short var_12 = (unsigned short)29357;
int var_13 = 638294832;
unsigned int var_14 = 3485758866U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
