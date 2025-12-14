#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)39;
unsigned short var_10 = (unsigned short)27103;
unsigned long long int var_12 = 7552567749968897210ULL;
short var_17 = (short)2550;
int zero = 0;
int var_19 = -1847383331;
unsigned char var_20 = (unsigned char)202;
long long int var_21 = -5314309675854192755LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
