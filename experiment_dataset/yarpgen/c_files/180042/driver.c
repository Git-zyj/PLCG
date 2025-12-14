#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)31898;
long long int var_6 = 8526066049429102666LL;
short var_7 = (short)-6182;
unsigned int var_9 = 440210872U;
long long int var_11 = 1574418317444216534LL;
int var_13 = 795740806;
unsigned char var_14 = (unsigned char)153;
int zero = 0;
signed char var_16 = (signed char)30;
unsigned long long int var_17 = 16440195233132322292ULL;
void init() {
}

void checksum() {
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
