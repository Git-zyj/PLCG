#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 11555306268132006915ULL;
long long int var_6 = -1453490872581209702LL;
unsigned int var_7 = 1625599243U;
int zero = 0;
short var_12 = (short)10258;
unsigned char var_13 = (unsigned char)89;
void init() {
}

void checksum() {
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
