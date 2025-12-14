#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)10972;
unsigned long long int var_7 = 7459214223922428764ULL;
unsigned char var_8 = (unsigned char)164;
unsigned char var_9 = (unsigned char)88;
long long int var_10 = 4005951654106675448LL;
int zero = 0;
unsigned char var_14 = (unsigned char)92;
unsigned char var_15 = (unsigned char)198;
void init() {
}

void checksum() {
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
