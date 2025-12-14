#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)27330;
long long int var_6 = 1386484607996050251LL;
signed char var_8 = (signed char)-47;
unsigned short var_15 = (unsigned short)39779;
unsigned long long int var_16 = 15838801077092784048ULL;
int zero = 0;
short var_18 = (short)31006;
short var_19 = (short)-21444;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
