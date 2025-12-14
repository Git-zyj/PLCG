#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1105841060U;
unsigned char var_5 = (unsigned char)119;
unsigned short var_6 = (unsigned short)60106;
signed char var_10 = (signed char)78;
unsigned long long int var_12 = 472735662786006260ULL;
int zero = 0;
short var_13 = (short)-7699;
unsigned char var_14 = (unsigned char)56;
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
