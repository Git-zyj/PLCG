#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8043336813704670269LL;
unsigned short var_5 = (unsigned short)43826;
int var_7 = 1828710349;
signed char var_8 = (signed char)-19;
unsigned long long int var_9 = 6793260487860836896ULL;
short var_12 = (short)17590;
short var_15 = (short)31519;
int zero = 0;
unsigned int var_18 = 2954022457U;
unsigned char var_19 = (unsigned char)64;
unsigned short var_20 = (unsigned short)54344;
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
