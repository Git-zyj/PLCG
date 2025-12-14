#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)9336;
unsigned long long int var_6 = 14784934344370224858ULL;
signed char var_8 = (signed char)110;
long long int var_12 = -934682282074544502LL;
int zero = 0;
int var_13 = -1348106259;
long long int var_14 = 6034238897004286621LL;
short var_15 = (short)-12403;
short var_16 = (short)-13630;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
