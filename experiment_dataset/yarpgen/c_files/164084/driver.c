#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 948730748U;
short var_4 = (short)-28215;
long long int var_9 = -1538332427435805165LL;
long long int var_10 = 555041508844247515LL;
unsigned short var_12 = (unsigned short)40877;
int zero = 0;
short var_13 = (short)16930;
unsigned char var_14 = (unsigned char)222;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
