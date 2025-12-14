#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18207;
int var_6 = 1755010287;
unsigned long long int var_10 = 16937229536234405849ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)82;
unsigned char var_12 = (unsigned char)74;
long long int var_13 = -3478616717479228400LL;
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
