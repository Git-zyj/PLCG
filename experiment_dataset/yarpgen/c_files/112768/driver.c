#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)83;
short var_2 = (short)25252;
long long int var_5 = 3387621478620632392LL;
short var_10 = (short)31653;
unsigned int var_11 = 2077715355U;
unsigned short var_12 = (unsigned short)11393;
int zero = 0;
long long int var_13 = 1332420207797658300LL;
short var_14 = (short)20137;
long long int var_15 = -2208492448314633849LL;
int var_16 = 287630781;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
