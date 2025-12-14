#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-22;
short var_1 = (short)-14589;
unsigned long long int var_3 = 8953375198514734175ULL;
signed char var_5 = (signed char)-41;
unsigned char var_12 = (unsigned char)255;
short var_13 = (short)-10998;
short var_16 = (short)24605;
int zero = 0;
short var_17 = (short)10915;
unsigned int var_18 = 498433671U;
signed char var_19 = (signed char)-110;
unsigned long long int var_20 = 10983768262713662181ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
