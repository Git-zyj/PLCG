#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5041873770900262949LL;
unsigned int var_10 = 1845442060U;
long long int var_12 = -7152011438036512065LL;
unsigned short var_15 = (unsigned short)40347;
int zero = 0;
short var_16 = (short)15966;
int var_17 = 194187889;
short var_18 = (short)8259;
unsigned short var_19 = (unsigned short)14627;
void init() {
}

void checksum() {
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
