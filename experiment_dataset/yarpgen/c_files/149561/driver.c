#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-13279;
int var_7 = -626316086;
long long int var_14 = -4426761260128646030LL;
int var_17 = -285181164;
int zero = 0;
int var_19 = 1051081941;
unsigned short var_20 = (unsigned short)51969;
long long int var_21 = -1453155478549939612LL;
void init() {
}

void checksum() {
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
