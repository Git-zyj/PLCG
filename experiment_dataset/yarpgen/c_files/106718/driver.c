#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7166596111921677658ULL;
unsigned char var_6 = (unsigned char)104;
unsigned short var_13 = (unsigned short)1716;
int zero = 0;
unsigned long long int var_17 = 16520966513943387561ULL;
long long int var_18 = 7503890968659824377LL;
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
