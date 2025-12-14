#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)39337;
unsigned short var_3 = (unsigned short)45949;
unsigned long long int var_8 = 12813765085830063455ULL;
int zero = 0;
long long int var_11 = 8024780942394249472LL;
short var_12 = (short)-2738;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
