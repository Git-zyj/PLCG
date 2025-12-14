#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)179;
int var_2 = -1440448924;
unsigned char var_3 = (unsigned char)182;
int var_5 = 1432520199;
unsigned int var_8 = 239897647U;
unsigned long long int var_9 = 10088576086013518145ULL;
unsigned char var_10 = (unsigned char)17;
long long int var_13 = 1455687739072219500LL;
int zero = 0;
long long int var_14 = -1931461209363367318LL;
int var_15 = 1584830097;
unsigned short var_16 = (unsigned short)34159;
long long int var_17 = -450611954967314102LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
