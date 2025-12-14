#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12700;
long long int var_1 = -4138464601094570847LL;
unsigned int var_5 = 3310954087U;
unsigned short var_6 = (unsigned short)35015;
signed char var_10 = (signed char)-2;
unsigned char var_15 = (unsigned char)75;
int zero = 0;
long long int var_17 = 3263003601516730053LL;
long long int var_18 = 5037102148301454932LL;
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
