#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9151;
unsigned int var_6 = 2889002302U;
long long int var_9 = -5567525251328508216LL;
int var_13 = -1123521721;
int zero = 0;
unsigned char var_14 = (unsigned char)151;
unsigned char var_15 = (unsigned char)81;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
