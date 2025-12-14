#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)95;
unsigned short var_1 = (unsigned short)43266;
unsigned char var_4 = (unsigned char)247;
unsigned long long int var_7 = 14290677308330895082ULL;
int var_8 = 1240336473;
unsigned char var_9 = (unsigned char)59;
int zero = 0;
unsigned int var_10 = 4020990450U;
unsigned char var_11 = (unsigned char)151;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
