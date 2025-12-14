#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15869601776999259683ULL;
unsigned int var_1 = 1435580241U;
unsigned int var_4 = 157460152U;
unsigned short var_10 = (unsigned short)17350;
int zero = 0;
int var_11 = 993466293;
unsigned long long int var_12 = 9321255418678916584ULL;
unsigned int var_13 = 1851305101U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
