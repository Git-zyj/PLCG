#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2608811412567078425ULL;
signed char var_2 = (signed char)13;
unsigned short var_4 = (unsigned short)58899;
short var_8 = (short)-26292;
short var_10 = (short)7825;
unsigned long long int var_13 = 15584538725723484512ULL;
unsigned int var_15 = 2675387041U;
unsigned short var_16 = (unsigned short)63781;
signed char var_17 = (signed char)71;
int zero = 0;
long long int var_18 = -5912151308571257548LL;
short var_19 = (short)32700;
signed char var_20 = (signed char)47;
long long int var_21 = -7893307055811404745LL;
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
