#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1180567625717592192ULL;
int var_8 = 1288396209;
unsigned char var_10 = (unsigned char)187;
int zero = 0;
unsigned long long int var_12 = 11164188232071616048ULL;
short var_13 = (short)-16280;
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
