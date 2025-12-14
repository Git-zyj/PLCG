#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7095839873189537868LL;
unsigned int var_3 = 1627912275U;
short var_8 = (short)29855;
int zero = 0;
unsigned short var_10 = (unsigned short)51333;
unsigned long long int var_11 = 13854770906143224551ULL;
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
