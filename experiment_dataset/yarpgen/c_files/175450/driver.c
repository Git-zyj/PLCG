#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)32157;
unsigned char var_6 = (unsigned char)197;
unsigned char var_9 = (unsigned char)71;
unsigned short var_10 = (unsigned short)513;
signed char var_14 = (signed char)-35;
int zero = 0;
long long int var_16 = 1630563826911376188LL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
