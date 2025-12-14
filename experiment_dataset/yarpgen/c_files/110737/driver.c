#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13320;
unsigned char var_1 = (unsigned char)133;
signed char var_3 = (signed char)17;
int zero = 0;
unsigned char var_15 = (unsigned char)9;
unsigned long long int var_16 = 1436807805576374554ULL;
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
