#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-4599;
unsigned int var_12 = 1137872342U;
long long int var_14 = 6979148807566448290LL;
signed char var_16 = (signed char)-127;
unsigned long long int var_17 = 3024523693232644168ULL;
long long int var_18 = -43336787569624983LL;
int zero = 0;
unsigned char var_19 = (unsigned char)214;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
