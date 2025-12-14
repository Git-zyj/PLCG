#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1759996489;
short var_5 = (short)-19705;
unsigned int var_6 = 1595545946U;
int zero = 0;
unsigned short var_18 = (unsigned short)45846;
unsigned long long int var_19 = 8143605327892332106ULL;
signed char var_20 = (signed char)-6;
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
