#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6898441897506102493LL;
unsigned long long int var_4 = 139153170286985502ULL;
unsigned long long int var_5 = 13500181716246323428ULL;
long long int var_10 = 9758801761757248LL;
int zero = 0;
short var_11 = (short)31215;
short var_12 = (short)8352;
unsigned int var_13 = 4117283904U;
unsigned short var_14 = (unsigned short)20895;
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
