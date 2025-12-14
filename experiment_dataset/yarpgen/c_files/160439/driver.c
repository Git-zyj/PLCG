#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 361413762;
int var_3 = 1632780096;
long long int var_8 = -2800039610976782658LL;
unsigned char var_14 = (unsigned char)35;
int zero = 0;
unsigned short var_20 = (unsigned short)22714;
unsigned long long int var_21 = 17403903091614023592ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
