#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8027178715388402387ULL;
unsigned short var_5 = (unsigned short)23325;
int zero = 0;
int var_18 = -1399114090;
signed char var_19 = (signed char)-16;
unsigned short var_20 = (unsigned short)50049;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
