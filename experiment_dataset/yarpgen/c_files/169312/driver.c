#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3341320706611734274ULL;
long long int var_9 = -830062214263917268LL;
unsigned short var_11 = (unsigned short)6909;
int zero = 0;
unsigned char var_17 = (unsigned char)206;
unsigned short var_18 = (unsigned short)54670;
void init() {
}

void checksum() {
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
