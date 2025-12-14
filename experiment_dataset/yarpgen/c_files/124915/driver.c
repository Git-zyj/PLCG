#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11760;
long long int var_4 = 8745922288666848929LL;
int var_5 = 721495196;
unsigned short var_6 = (unsigned short)14904;
short var_7 = (short)-15947;
unsigned int var_10 = 1547523925U;
short var_11 = (short)5264;
int zero = 0;
short var_14 = (short)-27554;
unsigned long long int var_15 = 11794333926656603311ULL;
int var_16 = -34916064;
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
