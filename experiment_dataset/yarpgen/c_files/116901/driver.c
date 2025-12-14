#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)41744;
unsigned int var_3 = 3621739065U;
unsigned short var_5 = (unsigned short)22882;
unsigned short var_7 = (unsigned short)25121;
unsigned short var_8 = (unsigned short)6041;
int zero = 0;
unsigned char var_10 = (unsigned char)11;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 2837256840U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
