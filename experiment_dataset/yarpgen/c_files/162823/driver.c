#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1705776707;
unsigned int var_3 = 2026897586U;
unsigned short var_4 = (unsigned short)10929;
long long int var_5 = 3771140458939009201LL;
int var_10 = 184150151;
int zero = 0;
unsigned long long int var_19 = 10668792243747903610ULL;
short var_20 = (short)-4082;
int var_21 = 1489111643;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
