#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5353928226414386476LL;
int var_6 = -445836690;
int var_8 = -1680567703;
long long int var_9 = -8539565773697382285LL;
long long int var_10 = 2622387543509600473LL;
short var_13 = (short)-3384;
unsigned char var_14 = (unsigned char)29;
int zero = 0;
unsigned long long int var_16 = 2209421534861164663ULL;
signed char var_17 = (signed char)72;
short var_18 = (short)19029;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
