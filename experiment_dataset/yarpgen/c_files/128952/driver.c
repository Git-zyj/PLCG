#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1215802682914733106LL;
unsigned char var_6 = (unsigned char)128;
int var_7 = 2014219785;
unsigned int var_9 = 2749799598U;
int var_16 = -997636125;
int zero = 0;
short var_18 = (short)3806;
unsigned long long int var_19 = 9006946659839045143ULL;
short var_20 = (short)20883;
short var_21 = (short)-23723;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
