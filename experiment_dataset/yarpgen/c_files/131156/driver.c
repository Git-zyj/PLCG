#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-63;
unsigned long long int var_5 = 8824926150655167829ULL;
long long int var_6 = -17169598928467513LL;
unsigned long long int var_8 = 8453061942874109413ULL;
unsigned char var_9 = (unsigned char)159;
long long int var_11 = -8777182355639843388LL;
int zero = 0;
signed char var_12 = (signed char)70;
signed char var_13 = (signed char)33;
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
