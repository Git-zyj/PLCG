#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 763943420872052905ULL;
unsigned char var_13 = (unsigned char)120;
int var_16 = -1980894009;
unsigned char var_17 = (unsigned char)212;
int zero = 0;
unsigned short var_18 = (unsigned short)44531;
unsigned int var_19 = 4288831762U;
void init() {
}

void checksum() {
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
