#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6741342581792040000LL;
unsigned long long int var_2 = 5692936133302655684ULL;
unsigned int var_3 = 3918502139U;
unsigned short var_4 = (unsigned short)58048;
int var_10 = -1924215211;
short var_14 = (short)-442;
signed char var_15 = (signed char)53;
unsigned int var_16 = 3460820895U;
unsigned short var_17 = (unsigned short)4106;
int zero = 0;
unsigned int var_18 = 1524301886U;
long long int var_19 = 4956497266707621817LL;
int var_20 = -1680487123;
void init() {
}

void checksum() {
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
