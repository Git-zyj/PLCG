#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27123;
unsigned long long int var_1 = 6929383602796798752ULL;
unsigned long long int var_3 = 15250760798243218053ULL;
short var_6 = (short)-17470;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = -1931149943;
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
