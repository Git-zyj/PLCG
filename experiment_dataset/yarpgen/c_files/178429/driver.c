#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2214998153418459481ULL;
unsigned short var_1 = (unsigned short)39357;
long long int var_6 = 7463500744041045462LL;
unsigned char var_8 = (unsigned char)228;
int zero = 0;
unsigned char var_10 = (unsigned char)114;
int var_11 = -1695552704;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
