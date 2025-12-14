#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)39240;
long long int var_8 = -3140225549769932875LL;
unsigned int var_9 = 4156449504U;
int zero = 0;
unsigned long long int var_12 = 18378416266259071443ULL;
short var_13 = (short)-53;
unsigned char var_14 = (unsigned char)153;
unsigned char var_15 = (unsigned char)203;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
