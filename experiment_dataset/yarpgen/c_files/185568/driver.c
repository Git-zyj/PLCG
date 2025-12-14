#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3980299827U;
long long int var_6 = 3674213453183175337LL;
short var_7 = (short)-9600;
int zero = 0;
unsigned int var_13 = 2804369998U;
unsigned char var_14 = (unsigned char)140;
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
