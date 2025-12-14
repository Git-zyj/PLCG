#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5482461565537517179LL;
long long int var_9 = 655496694027970192LL;
int zero = 0;
unsigned short var_12 = (unsigned short)50455;
unsigned char var_13 = (unsigned char)247;
short var_14 = (short)5403;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
