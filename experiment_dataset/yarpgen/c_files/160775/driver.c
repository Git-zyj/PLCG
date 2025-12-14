#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)77;
unsigned char var_4 = (unsigned char)239;
signed char var_5 = (signed char)-53;
int var_6 = 565651441;
short var_7 = (short)-17430;
short var_14 = (short)23818;
int zero = 0;
long long int var_17 = 5712321775822758518LL;
short var_18 = (short)-11624;
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
