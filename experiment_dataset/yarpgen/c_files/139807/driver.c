#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7980196894960499582LL;
signed char var_3 = (signed char)33;
unsigned char var_6 = (unsigned char)62;
int zero = 0;
long long int var_16 = -6032633571947285244LL;
short var_17 = (short)684;
signed char var_18 = (signed char)-93;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
