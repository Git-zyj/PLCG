#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)167;
unsigned long long int var_4 = 3683349906828016874ULL;
unsigned int var_5 = 2840604577U;
unsigned short var_13 = (unsigned short)21800;
int zero = 0;
int var_16 = -1290896786;
unsigned int var_17 = 4233790833U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
