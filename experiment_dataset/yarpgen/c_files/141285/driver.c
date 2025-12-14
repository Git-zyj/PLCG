#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1268563035637121458ULL;
unsigned int var_6 = 1602409485U;
unsigned short var_9 = (unsigned short)60908;
int zero = 0;
unsigned short var_10 = (unsigned short)17343;
unsigned short var_11 = (unsigned short)28225;
unsigned char var_12 = (unsigned char)107;
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
