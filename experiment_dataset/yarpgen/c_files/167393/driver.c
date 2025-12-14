#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-66;
unsigned char var_1 = (unsigned char)88;
signed char var_8 = (signed char)52;
unsigned long long int var_9 = 12399846469807439319ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)22313;
int var_12 = 1702026291;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
