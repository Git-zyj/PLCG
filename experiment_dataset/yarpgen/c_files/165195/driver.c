#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)57;
unsigned int var_9 = 535243022U;
long long int var_10 = 6298302907476361828LL;
int zero = 0;
long long int var_11 = 8464879281603240806LL;
unsigned int var_12 = 1332786929U;
unsigned int var_13 = 1226499691U;
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
