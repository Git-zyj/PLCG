#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62876;
unsigned char var_5 = (unsigned char)53;
unsigned char var_9 = (unsigned char)223;
unsigned short var_11 = (unsigned short)33519;
short var_13 = (short)6848;
int zero = 0;
unsigned char var_15 = (unsigned char)211;
long long int var_16 = -5536684129059543417LL;
unsigned short var_17 = (unsigned short)28656;
int var_18 = -52111162;
unsigned long long int var_19 = 4153106789439072904ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
