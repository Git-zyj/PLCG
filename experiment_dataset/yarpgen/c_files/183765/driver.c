#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 9728690286185178460ULL;
short var_8 = (short)-24682;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)27;
unsigned short var_16 = (unsigned short)51311;
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
