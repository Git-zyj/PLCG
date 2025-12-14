#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)12;
unsigned char var_2 = (unsigned char)145;
int var_9 = -1003724627;
int zero = 0;
unsigned int var_10 = 517614267U;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 13288554110272075118ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
