#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11943;
unsigned short var_7 = (unsigned short)32565;
long long int var_10 = 6208602721419191718LL;
int zero = 0;
long long int var_16 = 8277474084020646585LL;
unsigned char var_17 = (unsigned char)84;
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
