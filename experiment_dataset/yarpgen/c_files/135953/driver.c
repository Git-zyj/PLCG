#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -51330588;
unsigned char var_8 = (unsigned char)86;
unsigned long long int var_9 = 1639489927587113792ULL;
short var_16 = (short)974;
int zero = 0;
short var_17 = (short)11573;
long long int var_18 = -3999652315508416317LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
