#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56940;
unsigned int var_3 = 710392513U;
short var_7 = (short)-25254;
unsigned long long int var_8 = 14900488945021633532ULL;
unsigned int var_9 = 674487921U;
int zero = 0;
int var_11 = -875890126;
unsigned char var_12 = (unsigned char)20;
long long int var_13 = 8663235350968673240LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
