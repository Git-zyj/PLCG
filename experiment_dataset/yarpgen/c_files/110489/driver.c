#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -991598207;
int var_3 = -1199120470;
unsigned char var_7 = (unsigned char)127;
long long int var_9 = -8116324263509447480LL;
int zero = 0;
unsigned char var_14 = (unsigned char)223;
long long int var_15 = -6764652610719798612LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
