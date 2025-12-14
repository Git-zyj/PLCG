#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1696170454U;
short var_4 = (short)-13258;
unsigned short var_5 = (unsigned short)61421;
unsigned int var_6 = 4151525429U;
unsigned short var_10 = (unsigned short)59478;
int zero = 0;
unsigned long long int var_11 = 3240603412912954590ULL;
short var_12 = (short)-19194;
void init() {
}

void checksum() {
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
