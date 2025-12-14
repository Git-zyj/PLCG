#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -2770108362920219135LL;
short var_10 = (short)-3514;
unsigned char var_13 = (unsigned char)3;
short var_15 = (short)14011;
int zero = 0;
unsigned char var_17 = (unsigned char)162;
long long int var_18 = -1116535229619208211LL;
void init() {
}

void checksum() {
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
