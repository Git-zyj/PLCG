#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)46453;
unsigned short var_12 = (unsigned short)9816;
unsigned char var_13 = (unsigned char)79;
int zero = 0;
int var_17 = -234086971;
unsigned short var_18 = (unsigned short)57205;
unsigned long long int var_19 = 12504616874658783533ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
