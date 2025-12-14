#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8958;
unsigned short var_2 = (unsigned short)1915;
int var_5 = -1726618050;
int var_6 = 978614685;
long long int var_10 = 2376359876149038600LL;
int zero = 0;
unsigned short var_15 = (unsigned short)14917;
long long int var_16 = 5859272720190496448LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
