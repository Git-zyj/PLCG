#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7645554207970839254LL;
long long int var_5 = 8347349084008030204LL;
int var_8 = 1382903150;
signed char var_10 = (signed char)94;
unsigned long long int var_18 = 6301107273625128841ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)39437;
int var_21 = -1891527957;
unsigned int var_22 = 178040935U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
