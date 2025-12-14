#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3402840333U;
unsigned long long int var_8 = 9890871962874700869ULL;
short var_9 = (short)-5514;
int zero = 0;
int var_12 = 338335659;
unsigned short var_13 = (unsigned short)37532;
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
