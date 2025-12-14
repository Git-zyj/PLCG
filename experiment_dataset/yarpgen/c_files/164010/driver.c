#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7049687710015529135LL;
unsigned short var_3 = (unsigned short)11101;
unsigned int var_4 = 762969444U;
unsigned char var_5 = (unsigned char)144;
long long int var_6 = 702697420729290697LL;
long long int var_7 = 350869449756981008LL;
short var_8 = (short)-15729;
unsigned short var_11 = (unsigned short)28123;
int zero = 0;
long long int var_14 = -7255498342371468783LL;
long long int var_15 = 788451806108514877LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
