#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)83;
unsigned short var_1 = (unsigned short)52712;
unsigned char var_5 = (unsigned char)220;
long long int var_6 = -313695054104421023LL;
int zero = 0;
unsigned short var_14 = (unsigned short)23799;
unsigned long long int var_15 = 2897130673876467173ULL;
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
