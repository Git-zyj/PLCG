#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)2241;
long long int var_9 = -4668105185426775729LL;
signed char var_11 = (signed char)37;
int zero = 0;
int var_13 = 403732277;
signed char var_14 = (signed char)30;
signed char var_15 = (signed char)-45;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
