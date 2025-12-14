#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)37412;
unsigned short var_8 = (unsigned short)45409;
unsigned short var_11 = (unsigned short)36963;
unsigned char var_12 = (unsigned char)221;
int zero = 0;
short var_14 = (short)22679;
unsigned short var_15 = (unsigned short)41605;
long long int var_16 = 4923602544694516912LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
