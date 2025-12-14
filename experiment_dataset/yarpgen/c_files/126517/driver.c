#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1586566440U;
unsigned short var_6 = (unsigned short)25398;
unsigned long long int var_8 = 2496624980207242886ULL;
unsigned char var_11 = (unsigned char)139;
int zero = 0;
long long int var_14 = 516062122246684591LL;
_Bool var_15 = (_Bool)0;
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
