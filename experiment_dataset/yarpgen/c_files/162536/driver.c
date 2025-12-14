#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)26;
unsigned short var_3 = (unsigned short)8292;
short var_5 = (short)-19325;
unsigned short var_6 = (unsigned short)20601;
int zero = 0;
long long int var_10 = -7067472673196640895LL;
unsigned long long int var_11 = 5987802067475801514ULL;
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
