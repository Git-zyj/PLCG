#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59514;
long long int var_1 = 7766144382384036307LL;
short var_5 = (short)25440;
short var_7 = (short)-20064;
unsigned int var_9 = 3485662386U;
int zero = 0;
unsigned long long int var_12 = 14379152646666501950ULL;
unsigned int var_13 = 612385937U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
