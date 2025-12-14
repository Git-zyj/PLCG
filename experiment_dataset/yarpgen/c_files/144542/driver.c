#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6602438671229957822LL;
unsigned long long int var_2 = 7587332779117026472ULL;
signed char var_4 = (signed char)-82;
unsigned long long int var_5 = 5455028648441385389ULL;
unsigned long long int var_8 = 6041897005623505136ULL;
unsigned short var_13 = (unsigned short)49897;
int zero = 0;
unsigned long long int var_14 = 14116281817464662617ULL;
unsigned long long int var_15 = 3680256564079053554ULL;
short var_16 = (short)-17482;
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
