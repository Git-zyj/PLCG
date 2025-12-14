#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)42231;
unsigned short var_3 = (unsigned short)51578;
unsigned short var_12 = (unsigned short)30413;
int zero = 0;
unsigned short var_18 = (unsigned short)20649;
unsigned short var_19 = (unsigned short)42777;
unsigned short var_20 = (unsigned short)3504;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
