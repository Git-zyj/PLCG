#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)23293;
unsigned long long int var_4 = 15031232783744931947ULL;
short var_15 = (short)18566;
int zero = 0;
short var_16 = (short)-15857;
unsigned short var_17 = (unsigned short)13410;
long long int var_18 = 4568169997901133811LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
