#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7117569300011291152LL;
long long int var_3 = -6918402893812690744LL;
unsigned char var_9 = (unsigned char)99;
long long int var_10 = -629446029795943847LL;
int zero = 0;
long long int var_11 = -4859647243381313125LL;
unsigned long long int var_12 = 12289307742208717943ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
