#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 9837178507577350137ULL;
unsigned long long int var_7 = 5811471785915555887ULL;
unsigned long long int var_11 = 4333028799215371095ULL;
int zero = 0;
short var_15 = (short)-32720;
short var_16 = (short)-1420;
short var_17 = (short)-24621;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
