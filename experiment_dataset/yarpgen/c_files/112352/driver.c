#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)0;
short var_1 = (short)-2039;
signed char var_6 = (signed char)-26;
int zero = 0;
short var_16 = (short)-10496;
long long int var_17 = -5807720189271612520LL;
unsigned short var_18 = (unsigned short)18994;
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
