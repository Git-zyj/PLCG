#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)111;
unsigned short var_2 = (unsigned short)54135;
unsigned long long int var_4 = 14220665561843178720ULL;
int var_5 = -900099695;
int var_7 = 35367516;
short var_9 = (short)23167;
int zero = 0;
unsigned long long int var_10 = 12149964237862413736ULL;
unsigned short var_11 = (unsigned short)33709;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
