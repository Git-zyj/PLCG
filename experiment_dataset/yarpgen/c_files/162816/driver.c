#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 480788341U;
unsigned long long int var_4 = 15170201285758940469ULL;
long long int var_6 = 8088473105130689214LL;
int var_10 = 1347179128;
int zero = 0;
unsigned long long int var_13 = 3521799971284225064ULL;
unsigned char var_14 = (unsigned char)100;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
