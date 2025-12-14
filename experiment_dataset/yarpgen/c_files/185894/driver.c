#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14762427546239071480ULL;
unsigned char var_10 = (unsigned char)42;
int zero = 0;
unsigned short var_13 = (unsigned short)8775;
signed char var_14 = (signed char)110;
unsigned long long int var_15 = 9608726769692930867ULL;
void init() {
}

void checksum() {
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
