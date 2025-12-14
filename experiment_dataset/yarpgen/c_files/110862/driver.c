#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1170209526U;
int var_2 = -890071165;
long long int var_4 = 2489550799387758051LL;
unsigned char var_9 = (unsigned char)139;
int zero = 0;
long long int var_13 = -1203070661114125483LL;
short var_14 = (short)-21250;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
